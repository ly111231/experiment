#include <nvboard.h>
#include "Vtop.h"

void nvboard_bind_all_pins(Vtop* top) {
	nvboard_bind_pin( &top->opa, 4, SW7, SW6, SW5, SW4);
	nvboard_bind_pin( &top->opb, 4, SW3, SW2, SW1, SW0);
	nvboard_bind_pin( &top->sel, 3, SW15, SW14, SW13);
	nvboard_bind_pin( &top->rst, 4, LD3, LD2, LD1, LD0);
	nvboard_bind_pin( &top->CF, 1, LD15);
	nvboard_bind_pin( &top->OF, 1, LD14);
	nvboard_bind_pin( &top->ZF, 1, LD13);
}
