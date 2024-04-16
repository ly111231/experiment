#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <verilated.h>
#include <verilated_vcd_c.h>
#include "Vtop.h"

#define MAX_SIM_TIME 20
vluint64_t sim_time = 0;

int main(int argc, char** argv) {
    VerilatedContext* contextp = new VerilatedContext;
    contextp->commandArgs(argc, argv);

	Vtop *dut = new Vtop{contextp};
	Verilated::traceEverOn(true);		// 开启波形追踪
	VerilatedVcdC *m_trace = new VerilatedVcdC;
	dut->trace(m_trace, 5);
    m_trace->open("waveform.vcd");	
		
	while (sim_time < MAX_SIM_TIME && !contextp->gotFinish()) {
		int a = rand() & 1;
  		int b = rand() & 1;
  		dut->a = a;
  		dut->b = b;
  		dut->eval();
  		printf("a = %d, b = %d, f = %d\n", a, b,dut->f);
  		assert(dut->f == (a ^ b));
		m_trace->dump(sim_time);
		sim_time++;
	}
    
    dut->final();
	m_trace->close();
	delete dut;
	delete m_trace;
	delete contextp;

		
	return 0;
}

