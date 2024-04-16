#include <nvboard.h>
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <verilated.h>
#include <verilated_vcd_c.h>
#include "Vtop.h"
static VerilatedContext* contextp = new VerilatedContext;
static Vtop *dut = new Vtop{contextp};
void nvboard_bind_all_pins(Vtop* top);

static void single_cycle() {
  dut->clk = 0; dut->eval();
  dut->clk = 1; dut->eval();
}

static void reset_n(int n) {
  dut->rst_n = 0;
  while (n -- > 0) single_cycle();
  dut->rst_n = 1;
}

int main(int argc, char **argv) {
 	contextp->commandArgs(argc, argv);
 	nvboard_bind_all_pins(dut);
 	nvboard_init();
	reset_n(10);
 	while(1) {
 	  nvboard_update();
	  single_cycle();
 	}
	nvboard_quit();

	delete dut;
	delete contextp;

	return 0;	
}
