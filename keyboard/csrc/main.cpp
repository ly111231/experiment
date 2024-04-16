#include <verilated.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <nvboard.h>

#include "Vtop.h"
void nvboard_bind_all_pins(TOP_NAME* top);

VerilatedContext* contextp = new VerilatedContext;

TOP_NAME* top;

void single_cycle(){
  top->clk = 0;top->eval();
  contextp -> timeInc(1);
  top->clk = 1;top->eval();
  contextp -> timeInc(1);
}

void restN(int n){
  while(n--){
    top->reset = 1;
    single_cycle();
  }
  top->reset = 0;
  contextp -> timeInc(1);
}
int main(int argc, char** argv) {

    contextp->traceEverOn(true);

    contextp->commandArgs(argc, argv);

    // Verilated::mkdir("logs");

    top = new TOP_NAME(contextp);

    nvboard_bind_all_pins(top);
    nvboard_init();

    restN(10);

    while (!contextp->gotFinish()) {
      nvboard_update();
     //contextp->timeInc(1);
      
      //contextp->timeInc(1);
      single_cycle();
    }
    
    top->final();
    delete top;
    return 0;
}
