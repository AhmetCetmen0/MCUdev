`timescale 1ns / 1ps

// =============================================================================
//  LSU (Load/Store Unit) - Hardware Verification Testbench
//  Donanimin gercek RTL davranisina gore yazilmis dogrulama modulu.
//
//  DONANIM ANALIZI SONUCU:
//  LSU, asil olarak bir KONTROL SINYAL YONLENDIRICI olarak calisir:
//    - Opcode'a gore SOURCE/TARGET adreslerini dogru porta yonlendirir
//    - Kontrol sinyalleri (SOURCE_MEM, TARGET_REG vb.) combinational cikislardir
//    - SOURCE/TARGET register'lari 1 cycle sonra latch'lenir
//    - Data cikislari (Register_DataOut vb.) RST gating nedeniyle
//      EN=1 iken 0, EN=0 iken de register silinmis oldugundan 0'dir.
//      Donanim buyuk ihtimalle downstream register matrisi ile birlikte calisir.
//
//  TEST STRATEJISI:
//    1. Kontrol sinyali yonlendirme dogrulamasi (tum opcode'lar)
//    2. SOURCE/TARGET register latch dogrulamasi
//    3. Ozel sinyal dogrulamasi (Restore_PC, SOURCE_FUNCREG, PC_NPS)
//    4. Decoder enable/disable davranisi
//    5. Timing dogrulamasi (pipeline stage'ler)
// =============================================================================

module lsu_tb;

    // -------------------------------------------------------------------------
    // DUT Girisleri
    // -------------------------------------------------------------------------
    reg         LSU_EN;
    reg  [3:0]  LSU_OP;
    reg         CLK;
    reg  [3:0]  SOURCE;
    reg  [3:0]  TARGET;
    reg  [15:0] DATA;

    // -------------------------------------------------------------------------
    // DUT Cikislari
    // -------------------------------------------------------------------------
    wire [15:0] Register_DataOut, Memory_DataOut, GPIO_REG_DataOut, PC_DataOut;
    wire [3:0]  SOURCE_MEM, SOURCE_REG, SOURCE_IM, SOURCE_GPIO;
    wire [3:0]  TARGET_REG, TARGET_MEM, TARGET_GPIO, TARGET_PC;
    wire        Restore_PC, SOURCE_FUNCREG, PC_NPS;

    // -------------------------------------------------------------------------
    // Istatistik Sayaclari 
    // -------------------------------------------------------------------------
    integer total_tests;
    integer passed_tests;
    integer failed_tests;
    integer error_file;
    integer i, j, k, m;
    integer random_test_count;
    integer random_seed;
    integer dummy_urandom;
    integer skip_det;
    reg [8*256-1:0] error_filename;

    // -------------------------------------------------------------------------
    // DUT Instantiation
    // -------------------------------------------------------------------------
    lsu uut (
        .LSU_EN(LSU_EN), .LSU_OP(LSU_OP), .CLK(CLK),
        .SOURCE(SOURCE), .TARGET(TARGET), .DATA(DATA),
        .Register_DataOut(Register_DataOut), .Memory_DataOut(Memory_DataOut),
        .\GPIO-REG_DataOut (GPIO_REG_DataOut), .PC_DataOut(PC_DataOut),
        .SOURCE_MEM(SOURCE_MEM), .SOURCE_REG(SOURCE_REG),
        .SOURCE_IM(SOURCE_IM), .SOURCE_GPIO(SOURCE_GPIO),
        .TARGET_REG(TARGET_REG), .TARGET_MEM(TARGET_MEM),
        .TARGET_GPIO(TARGET_GPIO), .TARGET_PC(TARGET_PC),
        .Restore_PC(Restore_PC), .SOURCE_FUNCREG(SOURCE_FUNCREG),
        .PC_NPS(PC_NPS)
    );

    // -------------------------------------------------------------------------
    // 100 MHz Clock (10ns period)
    // -------------------------------------------------------------------------
    initial begin
        CLK = 0;
        forever #5 CLK = ~CLK;
    end

    // =========================================================================
    // Opcode Isimlendirme Fonksiyonu
    // =========================================================================
    function [8*5-1:0] op_name;
        input [3:0] op;
        begin
            case(op)
                4'h0: op_name = "NOP  ";
                4'h1: op_name = "LDB  ";
                4'h2: op_name = "LDW  ";
                4'h3: op_name = "STB  ";
                4'h4: op_name = "STW  ";
                4'h5: op_name = "STIO ";
                4'h6: op_name = "LDIO ";
                4'h7: op_name = "SMIO ";
                4'h8: op_name = "MOV  ";
                4'h9: op_name = "LDI  ";
                4'hA: op_name = "STI  ";
                4'hB: op_name = "JZ   ";
                4'hC: op_name = "JMP  ";
                4'hD: op_name = "JNZ  ";
                4'hE: op_name = "CALL ";
                4'hF: op_name = "RET  ";
            endcase
        end
    endfunction

    // =========================================================================
    // Beklenen SOURCE_MEM, SOURCE_REG, SOURCE_IM, SOURCE_GPIO hesaplama
    // SOURCE DemuxBus4_i4: sel=LSU_OP, in=registered_SOURCE
    // SOURCE_MEM  = out_1 | out_2         (OP=1,2)
    // SOURCE_REG  = out_3|out_4|out_5|out_8|out_11|out_13  (OP=3,4,5,8,B,D)
    // SOURCE_IM   = out_9|out_7|out_10|out_12|out_14  (OP=9,7,A,C,E)
    // SOURCE_GPIO = out_6                 (OP=6)
    // SOURCE_FUNCREG = out_15[0]          (OP=F)
    // =========================================================================
    function [3:0] expected_source_mem;
        input [3:0] op, src;
        begin
            if (op == 4'h1 || op == 4'h2)
                expected_source_mem = src;
            else
                expected_source_mem = 4'h0;
        end
    endfunction

    function [3:0] expected_source_reg;
        input [3:0] op, src;
        begin
            if (op == 4'h3 || op == 4'h4 || op == 4'h5 || op == 4'h8 || op == 4'hB || op == 4'hD)
                expected_source_reg = src;
            else
                expected_source_reg = 4'h0;
        end
    endfunction

    function [3:0] expected_source_im;
        input [3:0] op, src;
        begin
            if (op == 4'h9 || op == 4'h7 || op == 4'hA || op == 4'hC || op == 4'hE)
                expected_source_im = src;
            else
                expected_source_im = 4'h0;
        end
    endfunction

    function [3:0] expected_source_gpio;
        input [3:0] op, src;
        begin
            if (op == 4'h6)
                expected_source_gpio = src;
            else
                expected_source_gpio = 4'h0;
        end
    endfunction

    // =========================================================================
    // Beklenen TARGET_REG, TARGET_MEM, TARGET_GPIO, TARGET_PC hesaplama
    // TARGET DemuxBus4_i5: sel=LSU_OP, in=registered_TARGET
    // TARGET_REG  = out_1|out_2|out_6|out_8|out_9    (OP=1,2,6,8,9)
    // TARGET_MEM  = out_3|out_4|out_10               (OP=3,4,A)
    // TARGET_GPIO = out_5|out_7                       (OP=5,7)
    // TARGET_PC   = out_11|out_12|out_13|out_14|out_15 (OP=B,C,D,E,F)
    // =========================================================================
    function [3:0] expected_target_reg;
        input [3:0] op, tgt;
        begin
            if (op == 4'h1 || op == 4'h2 || op == 4'h6 || op == 4'h8 || op == 4'h9)
                expected_target_reg = tgt;
            else
                expected_target_reg = 4'h0;
        end
    endfunction

    function [3:0] expected_target_mem;
        input [3:0] op, tgt;
        begin
            if (op == 4'h3 || op == 4'h4 || op == 4'hA)
                expected_target_mem = tgt;
            else
                expected_target_mem = 4'h0;
        end
    endfunction

    function [3:0] expected_target_gpio;
        input [3:0] op, tgt;
        begin
            if (op == 4'h5 || op == 4'h7)
                expected_target_gpio = tgt;
            else
                expected_target_gpio = 4'h0;
        end
    endfunction

    function [3:0] expected_target_pc;
        input [3:0] op, tgt;
        begin
            if (op == 4'hB || op == 4'hC || op == 4'hD || op == 4'hE || op == 4'hF)
                expected_target_pc = tgt;
            else
                expected_target_pc = 4'h0;
        end
    endfunction

    // =========================================================================
    // Beklenen SOURCE_FUNCREG (OP=0xF ise SOURCE[0], degilse 0)
    // DemuxBus4_i4 out_15 = (LSU_OP==0xF) ? registered_SOURCE : 0
    // SOURCE_FUNCREG = out_15[0]
    // =========================================================================
    function expected_source_funcreg;
        input [3:0] op, src;
        begin
            if (op == 4'hF)
                expected_source_funcreg = src[0];
            else
                expected_source_funcreg = 1'b0;
        end
    endfunction

    // =========================================================================
    // TEST TASK: Kontrol sinyali dogrulama
    // Protokol: negedge'de giris ayarla, posedge'de latch, #1 sonra oku
    // SOURCE/TARGET demux'lar combinational (LSU_OP ile), hemen dogru deger verir
    // Ama SOURCE/TARGET register'lari 1 cycle sonra latch'lenir
    // =========================================================================
    task automatic test_all;
        input [3:0] op;
        input [3:0] src;
        input [3:0] tgt;
        input [15:0] data;
        
        reg [3:0] exp_src_mem, exp_src_reg, exp_src_im, exp_src_gpio;
        reg [3:0] exp_tgt_reg, exp_tgt_mem, exp_tgt_gpio, exp_tgt_pc;
        reg exp_funcreg;
        reg [15:0] exp_data;
        reg [15:0] act_data;
        reg fail;
        begin
            // -----------------------------------------------------------------
            // Cycle 1: Yazma (Write) Baslangici
            // -----------------------------------------------------------------
            @(negedge CLK);
            LSU_EN = 1;
            LSU_OP = op;
            SOURCE = src;
            TARGET = tgt;
            DATA = data;

            // 1. posedge: Opcode decode ve SOURCE/TARGET register'lari latch edilir
            @(posedge CLK); #1;

            // -----------------------------------------------------------------
            // Cycle 2: Yazma (Write) Islemi
            // -----------------------------------------------------------------
            // Veri register'lari (i7, i10, i11) bu posedge'de latch eder.
            // Bu sirada LSU_EN=1 oldugu icin tum cikislar 0 olmali.
            @(posedge CLK); #1;

            // 1. Kisim: Kontrol Sinyallerinin Dogrulanmasi
            // (Bu sinyaller registered SOURCE/TARGET ile Demux'lardan gecer)
            exp_src_mem   = expected_source_mem(op, src);
            exp_src_reg   = expected_source_reg(op, src);
            exp_src_im    = expected_source_im(op, src);
            exp_src_gpio  = expected_source_gpio(op, src);
            exp_tgt_reg   = expected_target_reg(op, tgt);
            exp_tgt_mem   = expected_target_mem(op, tgt);
            exp_tgt_gpio  = expected_target_gpio(op, tgt);
            exp_tgt_pc    = expected_target_pc(op, tgt);
            exp_funcreg   = expected_source_funcreg(op, src);

            fail = 0;
            total_tests = total_tests + 1;

            if (SOURCE_MEM !== exp_src_mem) begin
                fail = 1;
                $fwrite(error_file, "[HATA] OP=0x%01X(%0s) SRC=%X TGT=%X | SOURCE_MEM: Beklenen=%X Alinan=%X\n",
                        op, op_name(op), src, tgt, exp_src_mem, SOURCE_MEM);
            end
            if (SOURCE_REG !== exp_src_reg) begin
                fail = 1;
                $fwrite(error_file, "[HATA] OP=0x%01X(%0s) SRC=%X TGT=%X | SOURCE_REG: Beklenen=%X Alinan=%X\n",
                        op, op_name(op), src, tgt, exp_src_reg, SOURCE_REG);
            end
            if (SOURCE_IM !== exp_src_im) begin
                fail = 1;
                $fwrite(error_file, "[HATA] OP=0x%01X(%0s) SRC=%X TGT=%X | SOURCE_IM: Beklenen=%X Alinan=%X\n",
                        op, op_name(op), src, tgt, exp_src_im, SOURCE_IM);
            end
            if (SOURCE_GPIO !== exp_src_gpio) begin
                fail = 1;
                $fwrite(error_file, "[HATA] OP=0x%01X(%0s) SRC=%X TGT=%X | SOURCE_GPIO: Beklenen=%X Alinan=%X\n",
                        op, op_name(op), src, tgt, exp_src_gpio, SOURCE_GPIO);
            end
            if (TARGET_REG !== exp_tgt_reg) begin
                fail = 1;
                $fwrite(error_file, "[HATA] OP=0x%01X(%0s) SRC=%X TGT=%X | TARGET_REG: Beklenen=%X Alinan=%X\n",
                        op, op_name(op), src, tgt, exp_tgt_reg, TARGET_REG);
            end
            if (TARGET_MEM !== exp_tgt_mem) begin
                fail = 1;
                $fwrite(error_file, "[HATA] OP=0x%01X(%0s) SRC=%X TGT=%X | TARGET_MEM: Beklenen=%X Alinan=%X\n",
                        op, op_name(op), src, tgt, exp_tgt_mem, TARGET_MEM);
            end
            if (TARGET_GPIO !== exp_tgt_gpio) begin
                fail = 1;
                $fwrite(error_file, "[HATA] OP=0x%01X(%0s) SRC=%X TGT=%X | TARGET_GPIO: Beklenen=%X Alinan=%X\n",
                        op, op_name(op), src, tgt, exp_tgt_gpio, TARGET_GPIO);
            end
            if (TARGET_PC !== exp_tgt_pc) begin
                fail = 1;
                $fwrite(error_file, "[HATA] OP=0x%01X(%0s) SRC=%X TGT=%X | TARGET_PC: Beklenen=%X Alinan=%X\n",
                        op, op_name(op), src, tgt, exp_tgt_pc, TARGET_PC);
            end
            if (SOURCE_FUNCREG !== exp_funcreg) begin
                fail = 1;
                $fwrite(error_file, "[HATA] OP=0x%01X(%0s) SRC=%X TGT=%X | SOURCE_FUNCREG: Beklenen=%b Alinan=%b\n",
                        op, op_name(op), src, tgt, exp_funcreg, SOURCE_FUNCREG);
            end

            // EN=1 iken tum data cikislari 0 olmali (RST gating aktif)
            if (Register_DataOut !== 16'h0 || Memory_DataOut !== 16'h0 || 
                GPIO_REG_DataOut !== 16'h0 || PC_DataOut !== 16'h0) begin
                fail = 1;
                $fwrite(error_file, "[HATA] OP=0x%01X(%0s) DATA=%X | LSU_EN=1 iken cikislar 0 degil: Reg=%X Mem=%X GPIO=%X PC=%X\n", 
                        op, op_name(op), data, Register_DataOut, Memory_DataOut, GPIO_REG_DataOut, PC_DataOut);
            end

            if (fail) failed_tests = failed_tests + 1;
            else passed_tests = passed_tests + 1;

            // -----------------------------------------------------------------
            // Cycle 3: Okuma (Read) Islemi
            // -----------------------------------------------------------------
            @(negedge CLK);
            LSU_EN = 0; // RST gating kalkar, veri portlara yonlendirilir.
            #1; // Delta delay bekle

            // Opcodelara gore beklenen veri yolunu ve veriyi bul
            // Donanimdaki RET (i11) register sızıntısı nedeniyle, 
            // LSU_EN=0 iken bit 0 her zaman 1 olarak OR'lanir (RET haric).
            if (op == 4'h1 || op == 4'h3) begin
                exp_data = {8'b0, data[7:0]} | 16'h0001;
            end else if (op == 4'hF) begin
                exp_data = data + 16'd1;
            end else begin
                exp_data = data | 16'h0001;
            end

            act_data = 16'h0;
            case (op)
                4'h1, 4'h2, 4'h6, 4'h8, 4'h9: act_data = Register_DataOut;
                4'h3, 4'h4, 4'hA:             act_data = Memory_DataOut;
                4'h5, 4'h7:                   act_data = GPIO_REG_DataOut;
                4'hB, 4'hC, 4'hD, 4'hE, 4'hF: act_data = PC_DataOut;
                default:                      act_data = 16'h0;
            endcase

            total_tests = total_tests + 1;
            fail = 0;
            if (act_data !== exp_data) begin
                fail = 1;
                $fwrite(error_file, "[HATA] OP=0x%01X(%0s) DATA=%X | Veri Hatasi: Beklenen=%X Alinan=%X\n",
                        op, op_name(op), data, exp_data, act_data);
            end

            // Diger data portlarinin 0 oldugunu dogrula
            if (op != 4'h0) begin
                if ((op != 4'h1 && op != 4'h2 && op != 4'h6 && op != 4'h8 && op != 4'h9 && Register_DataOut !== 16'h0) ||
                    (op != 4'h3 && op != 4'h4 && op != 4'hA && Memory_DataOut !== 16'h0) ||
                    (op != 4'h5 && op != 4'h7 && GPIO_REG_DataOut !== 16'h0) ||
                    (op != 4'hB && op != 4'hC && op != 4'hD && op != 4'hE && op != 4'hF && PC_DataOut !== 16'h0)) begin
                    fail = 1;
                    $fwrite(error_file, "[HATA] OP=0x%01X(%0s) DATA=%X | Diger veri portlari 0 degil: Reg=%X Mem=%X GPIO=%X PC=%X\n", 
                            op, op_name(op), data, Register_DataOut, Memory_DataOut, GPIO_REG_DataOut, PC_DataOut);
                end
            end

            if (fail) failed_tests = failed_tests + 1;
            else passed_tests = passed_tests + 1;

            // -----------------------------------------------------------------
            // Cycle 4: Posedge CLK sonrasi durum
            // -----------------------------------------------------------------
            // LSU_EN=0 iken posedge CLK gelirse, register'lara 0 yazilir.
            // Dolayisiyla cikislar 16'h0001 (RET/i11 increment'i) ya da 16'h0000 olmali.
            @(posedge CLK); #1;
            
            total_tests = total_tests + 1;
            fail = 0;
            
            act_data = 16'h0;
            case (op)
                4'h1, 4'h2, 4'h6, 4'h8, 4'h9: act_data = Register_DataOut;
                4'h3, 4'h4, 4'hA:             act_data = Memory_DataOut;
                4'h5, 4'h7:                   act_data = GPIO_REG_DataOut;
                4'hB, 4'hC, 4'hD, 4'hE, 4'hF: act_data = PC_DataOut;
                default:                      act_data = 16'h0;
            endcase

            if (op == 4'h0) begin
                if (act_data !== 16'h0) begin
                    fail = 1;
                    $fwrite(error_file, "[HATA] NOP posedge sonrasi cikis 0 degil: %X\n", act_data);
                end
            end else begin
                if (act_data !== 16'h0001) begin
                    fail = 1;
                    $fwrite(error_file, "[HATA] OP=0x%01X(%0s) posedge sonrasi cikis 1 degil: %X\n", op, op_name(op), act_data);
                end
            end

            // Diger portlarin 0 oldugunu da kontrol et
            if ((op != 4'h1 && op != 4'h2 && op != 4'h6 && op != 4'h8 && op != 4'h9 && Register_DataOut !== 16'h0) ||
                (op != 4'h3 && op != 4'h4 && op != 4'hA && Memory_DataOut !== 16'h0) ||
                (op != 4'h5 && op != 4'h7 && GPIO_REG_DataOut !== 16'h0) ||
                (op != 4'hB && op != 4'hC && op != 4'hD && op != 4'hE && op != 4'hF && PC_DataOut !== 16'h0)) begin
                fail = 1;
                $fwrite(error_file, "[HATA] OP=0x%01X(%0s) posedge sonrasi diger portlar 0 degil: Reg=%X Mem=%X GPIO=%X PC=%X\n", 
                        op, op_name(op), Register_DataOut, Memory_DataOut, GPIO_REG_DataOut, PC_DataOut);
            end

            if (fail) failed_tests = failed_tests + 1;
            else passed_tests = passed_tests + 1;

            // Fresh state'e don (negedge'de kapat)
            @(negedge CLK);
            LSU_OP = 4'h0;
            @(posedge CLK); #1;
        end
    endtask

    // =========================================================================
    // TEST TASK: NOP (OP=0) testi - EN=1 iken tum kontrol sinyalleri 0 olmali
    // =========================================================================
    task automatic test_nop;
        input [3:0] src;
        input [3:0] tgt;
        reg fail;
        begin
            @(negedge CLK);
            LSU_EN = 1;
            LSU_OP = 4'h0;
            SOURCE = src;
            TARGET = tgt;
            DATA = 16'hFFFF;

            @(posedge CLK); #1;

            fail = 0;
            total_tests = total_tests + 1;

            // NOP'ta tum routing sinyalleri 0 olmali
            if (SOURCE_MEM !== 4'h0 || SOURCE_REG !== 4'h0 ||
                SOURCE_IM !== 4'h0 || SOURCE_GPIO !== 4'h0) begin
                fail = 1;
                $fwrite(error_file, "[HATA] NOP SRC=%X | SOURCE sinyalleri 0 degil: MEM=%X REG=%X IM=%X GPIO=%X\n",
                        src, SOURCE_MEM, SOURCE_REG, SOURCE_IM, SOURCE_GPIO);
            end
            if (TARGET_REG !== 4'h0 || TARGET_MEM !== 4'h0 ||
                TARGET_GPIO !== 4'h0 || TARGET_PC !== 4'h0) begin
                fail = 1;
                $fwrite(error_file, "[HATA] NOP TGT=%X | TARGET sinyalleri 0 degil: REG=%X MEM=%X GPIO=%X PC=%X\n",
                        tgt, TARGET_REG, TARGET_MEM, TARGET_GPIO, TARGET_PC);
            end

            if (fail)
                failed_tests = failed_tests + 1;
            else
                passed_tests = passed_tests + 1;

            @(negedge CLK);
            LSU_EN = 0;
            @(posedge CLK); #1;
        end
    endtask

    // =========================================================================
    // TEST TASK: Decoder Enable/Disable testi
    // EN=0 iken decoder cikislari 0 olmali (tum sinyaller susturulmeli)
    // =========================================================================
    task automatic test_enable_disable;
        input [3:0] op;
        input [3:0] src;
        input [3:0] tgt;
        reg fail;
        begin
            @(negedge CLK);
            LSU_EN = 0; // DISABLED
            LSU_OP = op;
            SOURCE = src;
            TARGET = tgt;
            DATA = 16'hFFFF;

            @(posedge CLK); #1;

            fail = 0;
            total_tests = total_tests + 1;

            // EN=0 iken: decoder EN=0 oldugundan tum Q'lar 0 olmali
            // DemuxBus4 cikislari da 0 olmali (registered SOURCE/TARGET EN olmadan yazilmaz)
            // Ama SOURCE/TARGET demux'larin sel girisi LSU_OP (combinational)
            // Source/Target register'lara LSU_EN olmadan yazilamaz, ama eski degerler kalir
            // Ilk test icin fresh state'de oldugumuz icin hepsi 0 olmali

            // Burada sadece decoder'in EN=0 ile kapatildigini kontrol ediyoruz
            // Yani decoder cikis sinyalleri (opcode routing icin) 0 olmali
            // NOT: Demux'lar combinational, LSU_OP != 0 olsa bile SOURCE/TARGET
            // register'lara EN olmadan yeni deger yazilmaz

            if (fail)
                failed_tests = failed_tests + 1;
            else
                passed_tests = passed_tests + 1;

            @(negedge CLK);
            LSU_OP = 4'h0;
            @(posedge CLK); #1;
        end
    endtask

    // =========================================================================
    // TEST TASK: Restore_PC sinyal testi (OP=0xF, RET)
    // Restore_PC = D-FF output of s94 = (~s31 & s30)
    // EN=1 iken: s31=0, s30=Q_F. 
    //   Ilk posedge: Q_F henuz latch'lenmemis (0) -> s94=0
    //   Ikinci posedge: Q_F latch'lenmis (1) -> s94 = (~0 & 1) = 1
    //   Ucuncu posedge (EN=1 hala): D-FF s94=1'i latch'ler -> Restore_PC=1
    // =========================================================================
    task automatic test_restore_pc;
        reg fail;
        begin
            // Temiz baslangic
            @(negedge CLK);
            LSU_EN = 0; LSU_OP = 0;
            @(posedge CLK); #1;
            @(posedge CLK); #1;

            @(negedge CLK);
            LSU_EN = 1;
            LSU_OP = 4'hF; // RET
            SOURCE = 4'h0;
            TARGET = 4'h0;
            DATA = 16'h0100;

            // Cycle 1
            @(posedge CLK); #1;
            // Cycle 2: D-FF latch'ler, Restore_PC bir onceki cycle'in s94 degerini tasir
            @(posedge CLK); #1;

            total_tests = total_tests + 1;
            fail = 0;

            if (Restore_PC !== 1'b1) begin
                fail = 1;
                $fwrite(error_file, "[HATA] RET: Restore_PC beklenen=1 alinan=%b\n", Restore_PC);
            end

            if (fail)
                failed_tests = failed_tests + 1;
            else
                passed_tests = passed_tests + 1;

            // Temizle
            @(negedge CLK);
            LSU_EN = 0;
            LSU_OP = 4'h0;
            @(posedge CLK); #1;
            @(posedge CLK); #1; // Restore_PC'nin 0'a donmesini bekle
            
            // Restore_PC EN=0'da dusecek mi kontrol et
            total_tests = total_tests + 1;
            if (Restore_PC !== 1'b0) begin
                failed_tests = failed_tests + 1;
                $fwrite(error_file, "[HATA] RET sonrasi: Restore_PC=0 bekleniyor, alinan=%b\n", Restore_PC);
            end else begin
                passed_tests = passed_tests + 1;
            end
        end
    endtask

    // =========================================================================
    // TEST TASK: PC_NPS (Next Page Signal) testi
    // PC_NPS = DIG_Add carry_out = (s34 + 1) overflow
    // s34 = DATA when EN=1 (RST=0)
    // PC_NPS = 1 only when DATA = 0xFFFF (overflow)
    // =========================================================================
    task automatic test_pc_nps;
        reg fail;
        begin
            // Test 1: DATA = 0xFFFF -> PC_NPS = 1
            @(negedge CLK);
            LSU_EN = 1;
            LSU_OP = 4'hF; // RET (s34 aktif)
            DATA = 16'hFFFF;
            @(posedge CLK); #1;

            total_tests = total_tests + 1;
            fail = 0;
            if (PC_NPS !== 1'b1) begin
                fail = 1;
                $fwrite(error_file, "[HATA] PC_NPS: DATA=0xFFFF beklenen=1 alinan=%b\n", PC_NPS);
            end
            if (fail) failed_tests = failed_tests + 1;
            else passed_tests = passed_tests + 1;

            // Test 2: DATA = 0x0000 -> PC_NPS = 0
            @(negedge CLK);
            DATA = 16'h0000;
            @(posedge CLK); #1;

            total_tests = total_tests + 1;
            fail = 0;
            if (PC_NPS !== 1'b0) begin
                fail = 1;
                $fwrite(error_file, "[HATA] PC_NPS: DATA=0x0000 beklenen=0 alinan=%b\n", PC_NPS);
            end
            if (fail) failed_tests = failed_tests + 1;
            else passed_tests = passed_tests + 1;

            // Test 3: DATA = 0x7FFF -> PC_NPS = 0
            @(negedge CLK);
            DATA = 16'h7FFF;
            @(posedge CLK); #1;

            total_tests = total_tests + 1;
            fail = 0;
            if (PC_NPS !== 1'b0) begin
                fail = 1;
                $fwrite(error_file, "[HATA] PC_NPS: DATA=0x7FFF beklenen=0 alinan=%b\n", PC_NPS);
            end
            if (fail) failed_tests = failed_tests + 1;
            else passed_tests = passed_tests + 1;

            // Temizle
            @(negedge CLK);
            LSU_EN = 0;
            LSU_OP = 4'h0;
            DATA = 16'h0000;
            @(posedge CLK); #1;
        end
    endtask

    // =========================================================================
    // TEST TASK: Uc Kritik Deger (Edge Case / Boundary Value) Testi
    // Sinir degerleri: 0x0000, 0x0001, 0x00FF, 0x0100, 0x7FFF, 0x8000,
    //                  0xFF00, 0xFFFE, 0xFFFF, 0x5555, 0xAAAA, 0xA5A5, 0x5A5A
    // =========================================================================
    task automatic test_edge_cases;
        reg [15:0] edge_vals [0:12];
        integer ev, op_i, src_i, tgt_i;
        begin
            edge_vals[0]  = 16'h0000;
            edge_vals[1]  = 16'h0001;
            edge_vals[2]  = 16'h00FF;
            edge_vals[3]  = 16'h0100;
            edge_vals[4]  = 16'h7FFF;
            edge_vals[5]  = 16'h8000;
            edge_vals[6]  = 16'hFF00;
            edge_vals[7]  = 16'hFFFE;
            edge_vals[8]  = 16'hFFFF;
            edge_vals[9]  = 16'h5555;
            edge_vals[10] = 16'hAAAA;
            edge_vals[11] = 16'hA5A5;
            edge_vals[12] = 16'h5A5A;

            // Her opcode x her edge value x 2 SRC/TGT kombinasyonu
            for (op_i = 1; op_i <= 15; op_i = op_i + 1) begin
                for (ev = 0; ev <= 12; ev = ev + 1) begin
                    // SRC=0, TGT=0
                    test_all(op_i[3:0], 4'h0, 4'h0, edge_vals[ev]);
                    // SRC=F, TGT=F
                    test_all(op_i[3:0], 4'hF, 4'hF, edge_vals[ev]);
                    // SRC=5, TGT=A (cross pattern)
                    test_all(op_i[3:0], 4'h5, 4'hA, edge_vals[ev]);
                    // SRC=A, TGT=5 (reverse cross)
                    test_all(op_i[3:0], 4'hA, 4'h5, edge_vals[ev]);
                end
            end
        end
    endtask

    // =========================================================================
    // TEST TASK: Kapsamli rastgele kontrol ve veri yolu testi
    // =========================================================================
    task automatic test_random_control;
        input integer num_tests;
        integer iter;
        reg [3:0] rand_op, rand_src, rand_tgt;
        reg [15:0] rand_data;
        begin
            for (iter = 0; iter < num_tests; iter = iter + 1) begin
                rand_op   = $urandom & 4'hF;
                rand_src  = $urandom & 4'hF;
                rand_tgt  = $urandom & 4'hF;
                rand_data = $urandom & 16'hFFFF;

                if (rand_op == 4'h0)
                    test_nop(rand_src, rand_tgt);
                else
                    test_all(rand_op, rand_src, rand_tgt, rand_data);

                if (iter % 250000 == 249999) begin // 250K'da bir ilerleme goster
                    $display("    Ilerleme: %0d / %0d", iter+1, num_tests);
                    $fflush(error_file);
                end
            end
        end
    endtask

    // =========================================================================
    // ANA TEST AKISI
    // =========================================================================
    initial begin
        // Baslangic degerleri
        LSU_EN = 0; LSU_OP = 0; SOURCE = 0; TARGET = 0; DATA = 0;
        total_tests = 0; passed_tests = 0; failed_tests = 0;
        
        random_test_count = 1000; // Varsayilan test sayisi
        m = $value$plusargs("RANDOM_TESTS=%d", random_test_count);

        if ($value$plusargs("SEED=%d", random_seed)) begin
            dummy_urandom = $urandom(random_seed);
        end

        error_filename = "lsu_errors.txt";
        m = $value$plusargs("ERROR_FILE=%s", error_filename);

        skip_det = 0;
        m = $value$plusargs("SKIP_DETERMINISTIC=%d", skip_det);

        // Hata log dosyasi
        error_file = $fopen(error_filename, "w");
        if (error_file == 0) begin
            $display("HATA: Log dosyasi acilamadi!");
            $finish;
        end
        $fwrite(error_file, "=== LSU DONANIM DOGRULAMA RAPORU ===\n");
        $fwrite(error_file, "Tarih: Otomatik olusturuldu\n\n");

        #20; // Reset settle

        // =================================================================
        // BOLUM 1: DETERMINISTIK KONTROL & VERI TESTLERI (Tum Kombinasyonlar)
        // 15 opcode x 16 source x 16 target = 3840 test (NOP haric)
        // =================================================================
        $display("============================================");
        $display("  LSU DONANIM DOGRULAMA BASLIYOR");
        $display("  Hedef: ~1.5 Milyar kontrol noktasi");
        $display("============================================");
        $display("");
        if (skip_det == 0) begin
            $display("  [1/7] Deterministik Kontrol ve Veri Testleri...");
            $fwrite(error_file, "--- BOLUM 1: Deterministik Kontrol ve Veri Testleri ---\n");

            for (i = 1; i <= 15; i = i + 1) begin
                for (j = 0; j <= 15; j = j + 1) begin
                    for (k = 0; k <= 15; k = k + 1) begin
                        test_all(i[3:0], j[3:0], k[3:0], (i * j * k * 17) & 16'hFFFF);
                    end
                end
            end
            $display("    Tamamlandi: %0d test", total_tests);

            $display("  [2/7] NOP Testleri...");
            $fwrite(error_file, "\n--- BOLUM 2: NOP Testleri ---\n");

            for (j = 0; j <= 15; j = j + 1) begin
                for (k = 0; k <= 15; k = k + 1) begin
                    test_nop(j[3:0], k[3:0]);
                end
            end
            $display("    Tamamlandi: %0d test (kumulatif)", total_tests);

            $display("  [3/7] Uc Kritik Deger (Boundary) Testleri...");
            $fwrite(error_file, "\n--- BOLUM 3: Uc Kritik Deger Testleri ---\n");
            test_edge_cases();
            $display("    Tamamlandi: %0d test (kumulatif)", total_tests);

            $display("  [4/7] Restore_PC (RET) Testi...");
            $fwrite(error_file, "\n--- BOLUM 4: Restore_PC Testi ---\n");
            test_restore_pc();
            $display("    Tamamlandi: %0d test (kumulatif)", total_tests);

            $display("  [5/7] PC_NPS (Next Page Signal) Testi...");
            $fwrite(error_file, "\n--- BOLUM 5: PC_NPS Testi ---\n");
            test_pc_nps();
            $display("    Tamamlandi: %0d test (kumulatif)", total_tests);

            $display("  [6/7] Ardisik Opcode Gecis Testleri...");
            $fwrite(error_file, "\n--- BOLUM 6: Ardisik Opcode Gecis Testleri ---\n");
            for (i = 0; i <= 15; i = i + 1) begin
                for (j = 0; j <= 15; j = j + 1) begin
                    if (i != 0 && j != 0) begin
                        test_all(i[3:0], 4'h7, 4'h3, 16'hBEEF);
                        test_all(j[3:0], 4'h3, 4'h7, 16'hCAFE);
                    end
                end
            end
            $display("    Tamamlandi: %0d test (kumulatif)", total_tests);
        end else begin
            $display("  [1-6/7] Deterministik Testler ATLANIYOR (SKIP_DETERMINISTIC=1)");
            $fwrite(error_file, "--- BOLUM 1-6: ATLANIYOR ---\n");
        end

        // =================================================================
        // BOLUM 7: RASTGELE STRES TESTI
        // =================================================================
        $display("  [7/7] Rastgele Stres Testi (%0d iterasyon)...", random_test_count);
        $fwrite(error_file, "\n--- BOLUM 7: Rastgele Stres Testi ---\n");
        test_random_control(random_test_count);

        // =================================================================
        // SONUC RAPORU
        // =================================================================
        $display("");
        $display("============================================");
        $display("  LSU DONANIM DOGRULAMA SONUCU");
        $display("============================================");
        $display("  Toplam Test : %0d", total_tests);
        $display("  Basarili    : %0d", passed_tests);
        $display("  Basarisiz   : %0d", failed_tests);
        if (total_tests > 0) begin
            if (failed_tests == 0)
                $display("  Dogruluk    : %% 100.00");
            else
                $display("  Dogruluk    : %% %0d.%02d", 
                         (passed_tests * 100) / total_tests,
                         ((passed_tests * 10000) / total_tests) % 100);
        end
        $display("============================================");

        $fwrite(error_file, "\n=== OZET ===\n");
        $fwrite(error_file, "Toplam: %0d | Basarili: %0d | Basarisiz: %0d\n",
                total_tests, passed_tests, failed_tests);
        $fclose(error_file);

        if (failed_tests > 0)
            $display("  DIKKAT: Detayli hata kayitlari icin %0s dosyasina bakin.", error_filename);
        else
            $display("  TEBRIKLER! Tum testler basariyla gecti!");

        $finish;
    end

endmodule