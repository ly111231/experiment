#include <nvboard.h>
#include "Vtop.h"
// static VerilatedContext* contextp = new VerilatedContext;
static Vtop *dut = new Vtop;
void nvboard_bind_all_pins(Vtop* top);

static void single_cycle() {
  dut->clk = 0; dut->eval();
  dut->clk = 1; dut->eval();
}

static void reset_n(int n) {
  dut->reset = 1;
  while (n -- > 0) single_cycle();
  dut->reset = 0;
}

int main(int argc, char **argv) {

 	nvboard_bind_all_pins(dut);
 	nvboard_init();
	reset_n(10);
 	while(1) {
 	  nvboard_update();
	  single_cycle();
 	}
	nvboard_quit();
	delete dut;
	return 0;	
}
