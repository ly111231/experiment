 module top (
    input   clk,
    input   reset,
    input   init,
    input   [7:0]   init_data,
    output  [7:0]   shift_data,
    output  [7:0]   seg0,   // 低4bit
    output  [7:0]   seg1    // 高4bit
 );
    reg [7:0]   tmp_data;
    always @(posedge clk) begin
        if(reset == 1'b1) begin
            tmp_data <= 0;
        end else begin
            if (init == 1'b1) begin
                tmp_data <= init_data;
            end else begin
                //  x7 = x4 ^ x3 ^ x2 ^ x0, x[6:0] = x[7:1]
                tmp_data <= {(tmp_data[0] ^ tmp_data[2] ^ tmp_data[3] ^ tmp_data[4]), tmp_data[7:1]};
            end
        end
    end

    // 移位结果输出
   assign shift_data = tmp_data;

    //========数码管=======
    wire [7:0] seg_tmp0;
        bcd7seg u_seg(
            .b(tmp_data[3:0]),
            .h(seg_tmp0)
    );
    assign seg0 = ~seg_tmp0;

    wire [7:0] seg_tmp1;
        bcd7seg u1_seg(
            .b(tmp_data[7:4]),
            .h(seg_tmp1)
    );
    assign seg1 = ~seg_tmp1;
    
 endmodule
 