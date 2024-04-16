module bcd7seg(
    input   [3:0]       b,
    output  reg [7:0]   h
);
    always @(*) begin
        case(b)
            4'd0 : h = 8'b11111101;
            4'd1 : h = 8'b01100000; 
            4'd2 : h = 8'b11011010; 
            4'd3 : h = 8'b11110010;
            4'd4 : h = 8'b01100110;
            4'd5 : h = 8'b10110110;
            4'd6 : h = 8'b10111110;
            4'd7 : h = 8'b11100000;
            default : h = 8'b11111111;
        endcase
    end


endmodule
