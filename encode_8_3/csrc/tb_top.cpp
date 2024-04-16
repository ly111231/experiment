#include "verilated.h"
#include "verilated_vcd_c.h"
#include "Vtop.h"

#define MAX_SIM_TIME 20
VerilatedContext* contextp = NULL;
VerilatedVcdC* tfp = NULL;

static Vtop* top;

void step_and_dump_wave(){
  top->eval();
  contextp->timeInc(1);
  tfp->dump(contextp->time());
}
void sim_init(){
  contextp = new VerilatedContext;
  tfp = new VerilatedVcdC;
  top = new Vtop;
  contextp->traceEverOn(true);
  top->trace(tfp, 0);
  tfp->open("waveform.vcd");
}

void sim_exit(){
  step_and_dump_wave();
  tfp->close();
}

void single_cycle(){
	top->clk = 0; step_and_dump_wave();
	top->clk = 1; step_and_dump_wave();
}
//高电平复位
static void reset(int n) {
  top->rst_n = 1;
  while (n -- > 0) single_cycle();
  top->rst_n = 0;
}
static void reset_n(int n) {
  top->rst_n = 0;
  while (n -- > 0) single_cycle();
  top->rst_n = 1;
}
int main() {
  	sim_init();
	reset_n(3);
	top->en = 0;
	while (contextp->time() < MAX_SIM_TIME && !contextp->gotFinish()) {
		top->en = 1;
		top->sw = rand() % 256;
		single_cycle();
	}
  	sim_exit();
}