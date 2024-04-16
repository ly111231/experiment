#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <verilated.h>
#include "Vtop.h"


int main(int argc, char** argv) {
    Verilated::mkdir("logs");		//存放波形文件
    VerilatedContext* contextp = new VerilatedContext;
    contextp->commandArgs(argc, argv);
    contextp->traceEverOn(true);	//开启波形追踪

		Vtop *dut = new Vtop{contextp};
		
		while (contextp->time()<20 && !contextp->gotFinish()) {		//contextp->time()上下文管理器控制时间
			int a = rand() & 1;
  		int b = rand() & 1;
  		dut->a = a;
  		dut->b = b;
  		dut->eval();
      contextp->timeInc(1);  // 1 timeprecision period passes...
  		printf("a = %d, b = %d, f = %d\n", a, b,dut->f);
  		assert(dut->f == (a ^ b));
		}
    
    dut->final();
	  delete dut;
		delete contextp;
		
		return 0;
}

