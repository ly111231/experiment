module top (
    input   clk,
    input   reset,
    input [3:0]     opa,
    input [3:0]     opb,
    input [2:0]     sel,
    output  reg [3:0]    rst,
    output          CF, 
    output          OF,
    output          ZF
);
    wire cn; //符号位进位
    wire cin;
    wire [3:0]  t_add_cin;  // 另一个操作数经过cin处理，减数取反加1
    wire [3:0]  comp_rst;   // 加法器计算结果
    assign cin = (sel == 3'b001 | sel == 3'b110) ? 1 : 0;       // cin ,在减法运算和比较大小时，cin置1
    assign t_add_cin = ({4{cin}} ^ opb) + {3'b0, cin};    
    assign {cn,comp_rst} = opa + t_add_cin;     // 加法器

    assign CF = cn ^ cin;   // carry flag
    assign OF = (opa[3] == t_add_cin[3]) && (comp_rst[3] != opa[3]);    // overflow flag
    assign ZF = ~(|comp_rst);
    always @(posedge clk) begin
        if(reset == 1'b1) begin
            rst <= 4'b0000;
        end else begin
            case (sel)
                3'b000: begin   //  A + B
                            rst <= comp_rst ;
                        end
                3'b001: begin   // A - B
                            rst <= comp_rst ;
                        end 
                3'b010: begin
                            rst <= ~opa;
                        end 
                3'b011: begin
                            rst <= opa & opb;
                        end
                3'b100: begin
                            rst <= opa | opb;
                        end
                3'b101: begin
                            rst <= opa ^ opb;
                        end 
                3'b110: begin   // A < B ? 1 : 0
                            rst <= {3'b0, OF ^ comp_rst[3]};
                        end 
                3'b111: begin   // A == B ? 1 : 0
                            rst <= {3'b0, ZF};
                        end   
                default: rst <= 4'b0;
            endcase
        end
    end
    
endmodule