#include <nvboard.h>
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <verilated.h>
#include <verilated_vcd_c.h>
#include "Vtop.h"

#define MAX_SIM_TIME 20
vluint64_t sim_time = 0;

void nvboard_bind_all_pins(Vtop* top);

// static void single_cycle() {
// 	dut->clk = 0; dut->eval();
//   dut->clk = 1; dut->eval();
// }
// //高电平复位
// static void reset(int n) {
//   dut->rst = 1;
//   while (n -- > 0) single_cycle();
//   dut->rst = 0;
// }
// static void reset_n(int n) {
//   dut->rst = 0;
//   while (n -- > 0) single_cycle();
//   dut->rst = 1;
// }

int main(int argc, char **argv) {
 	VerilatedContext* contextp = new VerilatedContext;
 	contextp->commandArgs(argc, argv);

 	Vtop *dut = new Vtop{contextp};
 	nvboard_bind_all_pins(dut);
 	nvboard_init();

 	// reset(10);

 	while(1) {
 	  // single_cycle();
	  dut->eval();
 	  nvboard_update();
 	}
	nvboard_quit();
	//  	Verilated::traceEverOn(true);		// 开启波形追踪
// 	VerilatedVcdC *m_trace = new VerilatedVcdC;
// 	dut->trace(m_trace, 5);
//   m_trace->open("waveform.vcd");	
		
// 	while (sim_time < MAX_SIM_TIME && !contextp->gotFinish()) {
// 		int a = rand() & 3;
//  		int b = rand() & 3;
//  		int c = rand() & 3;
//  		int d = rand() & 3;
//  		int y = rand() & 3;
//   	dut->X0 = a;
//   	dut->X1 = b;
//   	dut->X2 = c;
//   	dut->X3 = d;
//   	dut->Y = y;

//   	dut->eval();
//   	printf("X0 = %d, X1 = %d, X2 = %d, X3 = %d, y = %d, out = %d\n", dut->X0, dut->X1, dut->X2, dut->X3, dut->Y, dut->out);
//   	// assert(dut->f == (a ^ b));
// 	  m_trace->dump(sim_time);
// 		sim_time++;
// 	}
    
  	// dut->final();
	// m_trace->close();
	delete dut;
	// delete m_trace;
	delete contextp;

	return 0;	
}
