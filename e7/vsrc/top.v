`timescale 1ns / 1ps
module top (
    input   clk,
    input   reset,
    input   kbd_clk,
    input   kbd_data,

    output  [7:0]   seg0,
    output  [7:0]   seg1,
    output  [7:0]   seg2,
    output  [7:0]   seg3,
    output  [7:0]   seg4,
    output  [7:0]   seg5,
    output      ready,
    output      overflow,
    output      [3:0] stata

);
    assign stata = current_state;
    // ps2_keyboard port
    wire    [7:0]   data;
    // wire            ready;
    // wire            overflow;
    reg             nextdata_n;

    reg             flag;           // 一个按键接收完成的标志
    reg     [7:0]   cur_make_code;  // 当前正在接收的按键的通码
    reg     [7:0]   cur_asc2_code;
    reg     [7:0]   cnt;

    // fsm 
    localparam IDLE = 4'b0000;
    localparam MAKE_CODE = 4'b0001;
    localparam BREAK_CODE = 4'b0010;
    localparam END_RECEIVE = 4'b0100;

    reg     [3:0]   current_state;
    reg     [3:0]   next_stata;

    always @(posedge clk) begin
        if (reset == 1'b1) begin
            current_state <= IDLE;
        end else begin
            current_state <= next_stata;
        end
    end

    always @(*) begin
        case (current_state)
            IDLE:   begin
                        if (ready == 1'b1) begin
                            next_stata = MAKE_CODE;
                        end else begin
                            next_stata = IDLE;
                        end
                    end   
            MAKE_CODE:begin
                        if (ready == 1'b1 && data == 8'hF0) begin
                            next_stata = BREAK_CODE;
                        end else begin
                            next_stata = MAKE_CODE;
                        end
                    end
            BREAK_CODE:begin
                        if (flag == 1'b1) begin
                            next_stata = END_RECEIVE;
                        end else begin
                            next_stata = BREAK_CODE;
                        end
                    end
            END_RECEIVE:begin
                        next_stata = IDLE;
                    end 
            default: next_stata = IDLE;
        endcase
    end

    always @(posedge clk) begin
        if (reset == 1'b1) begin
            cur_make_code <= 0;
        end else begin
            if (current_state == IDLE && next_stata == MAKE_CODE) begin
                cur_make_code <= data;  // 取通码
            end else begin
                cur_make_code <= cur_make_code;
            end
        end
    end

    // 从fifo中取出接收的数据
    always @(posedge clk) begin
        if (reset == 1'b1) begin
            nextdata_n <= 1'b1;
        end else begin
            if ((next_stata == MAKE_CODE || next_stata == BREAK_CODE ) && ready == 1'b1 && nextdata_n == 1'b1) begin
                nextdata_n <= 1'b0;     // next_stata == MAKE_CODE :取按键一直按下发来的值, next_stata == BREAK_CODE :取 F0和断码
            end else begin
                nextdata_n <= 1'b1;
            end
        end
    end

    always @(posedge clk) begin
        if (reset == 1'b1) begin
            flag <= 1'b0;
        end else begin
            if ( next_stata == BREAK_CODE && data == cur_make_code && nextdata_n == 1'b0) begin
                flag <= 1'b1;
            end else begin 
                flag <= 1'b0;
            end
        end
    end

    // 接收按键计数
    always @(posedge clk) begin
        if (reset == 1'b1) begin
           cnt <= 0;
        end else begin
            if ( current_state == IDLE && next_stata == MAKE_CODE) begin
                cnt <= cnt + 1;
            end else begin
                cnt <= cnt;
            end
        end
    end

    always @(posedge clk) begin
        if (reset == 1'b1) begin
            cur_asc2_code <= 0;
        end else begin
            case (cur_make_code)
                8'h1c:  cur_asc2_code <= 8'h61;
                8'h32:  cur_asc2_code <= 8'h62; 
                default: cur_asc2_code <= 0;
            endcase
        end
    end




ps2_keyboard inst(
    .clk(clk),
    .clrn(~reset),
    .ps2_clk(kbd_clk),
    .ps2_data(kbd_data),
    .data(data),
    .ready(ready),
    .nextdata_n(nextdata_n),
    .overflow(overflow)
);

//======================数码管============================
    wire [7:0] seg_tmp0;
        bcd7seg u0_seg(
            .b(cur_asc2_code[3:0]),
            .h(seg_tmp0)
    );
    assign seg0 = current_state == MAKE_CODE ? ~seg_tmp0 : 8'hff;

    wire [7:0] seg_tmp1;
        bcd7seg u1_seg(
            .b(cur_asc2_code[7:4]),
            .h(seg_tmp1)
    );
    assign seg1 = current_state == MAKE_CODE ? ~seg_tmp1 : 8'hff;

    wire [7:0] seg_tmp2;
        bcd7seg u2_seg(
            .b(cur_make_code[3:0]),
            .h(seg_tmp2)
    );
    assign seg2 =  current_state == MAKE_CODE ? ~seg_tmp2 : 8'hff;

    wire [7:0] seg_tmp3;
        bcd7seg u3_seg(
            .b(cur_make_code[7:4]),
            .h(seg_tmp3)
    );
    assign seg3 =  current_state == MAKE_CODE ? ~seg_tmp3 : 8'hff;

    wire [7:0] seg_tmp4;
        bcd7seg u4_seg(
            .b(cnt[3:0]),
            .h(seg_tmp4)
    );
    assign seg4 = ~seg_tmp4;

    wire [7:0] seg_tmp5;
        bcd7seg u5_seg(
            .b(cnt[7:4]),
            .h(seg_tmp5)
    );
    assign seg5 = ~seg_tmp5;

endmodule
