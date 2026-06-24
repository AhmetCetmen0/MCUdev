module top;
    integer seed;
    integer d;
    initial begin
        if ($value$plusargs("SEED=%d", seed)) begin
            d = $urandom(seed);
        end
        $display("%d", $urandom);
    end
endmodule
