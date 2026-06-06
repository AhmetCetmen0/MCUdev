`timescale 1ns/1ps

module ALU_tb;

    localparam OP = `TEST_OPCODE;

    reg        En, CLK, Carry_In, Borrow_In;
    reg  [3:0] Opcode;
    reg  [15:0] A_in, B_in;

    wire [15:0] Sum, Sub, mul_low, mul_high;
    wire        Carry_Out, Borrow_Out;
    wire [15:0] w_AND, w_XOR, w_OR, w_Not;
    wire [15:0] SAR, SHR, SHL, ROR;
    wire        SLT, SLTU, LSU_EN, SERACC_EN;

    ALU dut (
        .En(En), .Opcode(Opcode), .A(A_in), .B(B_in), .CLK(CLK),
        .Carry_In(Carry_In), .Borrow_In(Borrow_In),
        .Sum(Sum), .Carry_Out(Carry_Out), .Borrow_Out(Borrow_Out),
        .Sub(Sub), .mul_low(mul_low), .mul_high(mul_high),
        .\AND (w_AND), .\XOR (w_XOR), .\OR (w_OR), .\Not (w_Not),
        .SAR(SAR), .SHR(SHR), .SHL(SHL), .ROR(ROR),
        .SLT(SLT), .SLTU(SLTU), .LSU_EN(LSU_EN), .SERACC_EN(SERACC_EN)
    );

    // Clock Generation: 10ns period
    initial begin
        CLK = 0;
        forever #5 CLK = ~CLK;
    end

    integer error_file;
    integer total_tests, total_errors;
    integer iter, i, j;
    
    // Corner Cases Array (Uç Nokta Değerleri)
    reg [15:0] corner_cases [0:7];
    initial begin
        corner_cases[0] = 16'h0000; // Zero
        corner_cases[1] = 16'hFFFF; // All 1s (-1)
        corner_cases[2] = 16'h0001; // One
        corner_cases[3] = 16'h8000; // Min Signed
        corner_cases[4] = 16'h7FFF; // Max Signed
        corner_cases[5] = 16'hAAAA; // Alternating 1010
        corner_cases[6] = 16'h5555; // Alternating 0101
        corner_cases[7] = 16'hFFFE; // All 1s except LSB
    end

    function [8*8-1:0] op_name(input [3:0] op);
        case(op)
            4'h0: op_name = "ADD     ";
            4'h1: op_name = "SUB     ";
            4'h2: op_name = "MUL_LOW ";
            4'h3: op_name = "MUL_HIGH";
            4'h4: op_name = "AND     ";
            4'h5: op_name = "XOR     ";
            4'h6: op_name = "OR      ";
            4'h7: op_name = "NOT     ";
            4'h8: op_name = "SAR     ";
            4'h9: op_name = "SHR     ";
            4'hA: op_name = "SHL     ";
            4'hB: op_name = "SLT     ";
            4'hC: op_name = "SLTU    ";
            4'hD: op_name = "ROR     ";
            4'hE: op_name = "SERACC  ";
            4'hF: op_name = "LSU     ";
            default: op_name = "UNKNOWN ";
        endcase
    endfunction

    task setup_opcode(input [3:0] op);
        begin
            @(negedge CLK);
            En = 1; Opcode = op; A_in = 0; B_in = 0;
            Carry_In = 0; Borrow_In = 0;
            @(posedge CLK); // RegCtrl latches opcode decode
        end
    endtask

    // TASK AUTOMATIC: Değişkenlerin lokal kalmasını sağlar, güvenliği artırır.
    task automatic apply_and_check(input [15:0] a, input [15:0] b, input cin);
        reg [16:0] exp17;
        reg [15:0] exp16;
        reg [31:0] exp32;
        reg        exp1, got1;
        reg [15:0] got16;
        reg        got_c;
        reg        fail;
        begin
            @(negedge CLK);
            A_in = a; B_in = b;
            if (OP == 0) Carry_In = cin;
            if (OP == 1) Borrow_In = cin;
            
            @(posedge CLK);
            #1; // Setup/Hold simülasyonu için küçük okuma gecikmesi

            fail = 0;

            case (OP)
                4'h0: begin 
                    exp17 = a + b + cin;
                    got16 = Sum; got_c = Carry_Out;
                    if (got16 !== exp17[15:0] || got_c !== exp17[16]) fail = 1;
                end
                4'h1: begin 
                    exp17 = a - b - cin;
                    got16 = Sub; got_c = Borrow_Out;
                    if (got16 !== exp17[15:0] || got_c !== exp17[16]) fail = 1;
                end
                4'h2: begin 
                    exp32 = $signed(a) * $signed(b);
                    exp16 = exp32[15:0]; got16 = mul_low;
                    if (got16 !== exp16) fail = 1;
                end
                4'h3: begin 
                    exp32 = $signed(a) * $signed(b);
                    exp16 = exp32[31:16]; got16 = mul_high;
                    if (got16 !== exp16) fail = 1;
                end
                4'h4: begin exp16 = a & b; got16 = w_AND; if (got16 !== exp16) fail = 1; end
                4'h5: begin exp16 = a ^ b; got16 = w_XOR; if (got16 !== exp16) fail = 1; end
                4'h6: begin exp16 = a | b; got16 = w_OR;  if (got16 !== exp16) fail = 1; end
                4'h7: begin exp16 = ~a;    got16 = w_Not; if (got16 !== exp16) fail = 1; end
                4'h8: begin exp16 = $signed(a) >>> b[3:0]; got16 = SAR; if (got16 !== exp16) fail = 1; end
                4'h9: begin exp16 = a >> b[3:0]; got16 = SHR; if (got16 !== exp16) fail = 1; end
                4'hA: begin exp16 = a << b[3:0]; got16 = SHL; if (got16 !== exp16) fail = 1; end
                4'hB: begin exp1 = $signed(a) < $signed(b); got1 = SLT; if (got1 !== exp1) fail = 1; end
                4'hC: begin exp1 = a < b; got1 = SLTU; if (got1 !== exp1) fail = 1; end
                4'hD: begin 
                    exp16 = (b[3:0] == 0) ? a : ((a >> b[3:0]) | (a << (16 - b[3:0])));
                    got16 = ROR;
                    if (got16 !== exp16) fail = 1;
                end
                4'hE: begin got1 = SERACC_EN; if (got1 !== 1'b1) fail = 1; end
                4'hF: begin got1 = LSU_EN; if (got1 !== 1'b1) fail = 1; end
            endcase

            total_tests = total_tests + 1;

            if (fail) begin
                total_errors = total_errors + 1;
                if (OP == 4'hB || OP == 4'hC || OP == 4'hE || OP == 4'hF) begin
                    $fwrite(error_file, "[HATA] Op=0x%01X (%0s) A=0x%04X B=0x%04X Cin=%0d | Beklenen=%0d | Alinan=%0d | @%0t\n", OP, op_name(OP), a, b, cin, exp1, got1, $time);
                end else if (OP == 4'h0 || OP == 4'h1) begin
                    $fwrite(error_file, "[HATA] Op=0x%01X (%0s) A=0x%04X B=0x%04X Cin=%0d | Beklenen=0x%04X C=%0d | Alinan=0x%04X C=%0d | @%0t\n", OP, op_name(OP), a, b, cin, exp17[15:0], exp17[16], got16, got_c, $time);
                end else begin
                    $fwrite(error_file, "[HATA] Op=0x%01X (%0s) A=0x%04X B=0x%04X | Beklenen=0x%04X | Alinan=0x%04X | @%0t\n", OP, op_name(OP), a, b, exp16, got16, $time);
                end
                $fflush(error_file);
            end
        end
    endtask

    initial begin
        En = 0; Opcode = 0; A_in = 0; B_in = 0;
        Carry_In = 0; Borrow_In = 0;
        total_tests = 0; total_errors = 0;

        error_file = $fopen($sformatf("errors_op%0d.txt", OP), "w");
        if (error_file == 0) begin
            $display("HATA: Log dosyasi acilamadi!");
            $finish;
        end

        $fwrite(error_file, "=== ALU TEST RAPORU - Opcode 0x%01X (%0s) ===\n", OP, op_name(OP));
        $display("============================================");
        $display("  ALU Optimizeli Test Basliyor");
        $display("  Opcode: 0x%01X (%0s)", OP, op_name(OP));
        $display("============================================");

        #20;
        setup_opcode(OP);

        if (OP == 4'hE || OP == 4'hF) begin
            apply_and_check(16'h0000, 16'h0000, 0);
            apply_and_check(16'hFFFF, 16'hFFFF, 0);
            apply_and_check(16'h1234, 16'h5678, 0);
            $display("  Enable sinyal testi tamamlandi.");
        end
        else begin
            // 1. ASAMA: Corner Case (Uç Nokta) Testleri
            $display("  [1/2] Uç Nokta (Corner Case) Testleri yapiliyor...");
            for (i = 0; i < 8; i = i + 1) begin
                for (j = 0; j < 8; j = j + 1) begin
                    apply_and_check(corner_cases[i], corner_cases[j], 0);
                    if (OP == 4'h0 || OP == 4'h1) begin
                        apply_and_check(corner_cases[i], corner_cases[j], 1);
                    end
                end
            end

            // 2. ASAMA: Rastgele Testler
            $display("  [2/2] Rastgele 3 Milyon test basliyor...");
            for (iter = 0; iter < 3000000; iter = iter + 1) begin
                // $urandom ile temiz isaretsiz 32-bit uretip 16-bit'e kesiyoruz
                apply_and_check($urandom & 16'hFFFF, $urandom & 16'hFFFF, (OP == 4'h0 || OP == 4'h1) ? $urandom_range(0,1) : 0);

                if (iter % 500000 == 499999) begin
                    $display("  Ilerleme: %0d / 3000000 (%0d%%)", iter+1, (iter+1)*100/3000000);
                    $fwrite(error_file, "  Ilerleme: %0d / 3000000 (%0d%%)\n", iter+1, (iter+1)*100/3000000);
                    $fflush(error_file);
                end
            end
        end

        // Summary
        $display("============================================");
        $display("  SONUC - Opcode 0x%01X (%0s)", OP, op_name(OP));
        $display("  Toplam Test : %0d", total_tests);
        $display("  Basarili    : %0d", total_tests - total_errors);
        $display("  Basarisiz   : %0d", total_errors);
        $display("============================================");

        $fwrite(error_file, "=== OZET ===\n");
        $fwrite(error_file, "Toplam: %0d | Basarili: %0d | Basarisiz: %0d\n", total_tests, total_tests - total_errors, total_errors);
        $fclose(error_file);

        $finish;
    end

endmodule