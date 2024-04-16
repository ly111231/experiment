module top(
    // input   clk,
    // input   rst_n,
    input   [1:0]   X0,
    input   [1:0]   X1,
    input   [1:0]   X2,
    input   [1:0]   X3,
    input   [1:0]   Y,
    output  reg [1:0]   out
);
    always@(*) begin
        case (Y)
            2'b00:  out = X0;
            2'b01:  out = X1;
            2'b10:  out = X2;
            2'b11:  out = X3; 
            default: out = 2'b00;
        endcase
    end

    // MuxKey #(4, 2, 2)  u_MuxKey(
    //     out, Y, {
    //         2'b00, X0,
    //         2'b01, X1,
    //         2'b10, X2,
    //         2'b11, X3
    //     }
    // );
        


endmodule

