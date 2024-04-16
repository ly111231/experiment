module top(
    input           clk,
    input           rst_n,
    input           en,
    input   [7:0]   sw,
    output reg      valid,
    output reg [2:0]led,
    output     [7:0]seg     
);
    wire [7:0] seg_tmp;
    bcd7seg u_seg(
        .b({1'b0, led}),
        .h(seg_tmp)
    );
    assign seg = ~seg_tmp;
    always @(posedge clk) begin
        if(rst_n == 1'b0) begin
            valid <= 0;
            led <= 3'b000;
        end else begin
            if (en == 1'b1) begin
                casez (sw)
                    8'b1???_????:   begin
                                        valid <= 1'b1;
                                        led <= 3'd7;
                                    end 
                    8'b01??_????:   begin
                                        valid <= 1'b1;
                                        led <= 3'd6;
                                    end 
                    8'b001?_????:   begin
                                        valid <= 1'b1;
                                        led <= 3'd5;
                                    end 
                    8'b0001_????:   begin
                                        valid <= 1'b1;
                                        led <= 3'd4;
                                    end 
                    8'b0000_1???:   begin
                                        valid <= 1'b1;
                                        led <= 3'd3;
                                    end 
                    8'b0000_01??:   begin
                                        valid <= 1'b1;
                                        led <= 3'd2;
                                    end 
                    8'b0000_001?:   begin
                                        valid <= 1'b1;
                                        led <= 3'd1;
                                    end 
                    8'b0000_0001:   begin
                                        valid <= 1'b1;
                                        led <= 3'd0;
                                    end 
                    8'b0000_0000:   begin
                                        valid <= 1'b0;
                                        led <= 3'd0;
                                    end 
                    default:        begin
                                        valid <= 1'b0;
                                        led <= 3'd0;
                                    end 
                endcase
            end else begin
                valid <= 1'b0;
                led <= 3'd0;
            end
        end

    end
endmodule
