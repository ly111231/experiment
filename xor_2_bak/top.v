module top(
  input a,
  input b,
  output f
);
  assign f = a ^ b;

	initial begin
    $dumpfile("./logs/waveform.vcd");		//设置波形文件名
    $dumpvars();	//将当前仿真中的所有变量的值写入到波形文件中	
	end
endmodule
