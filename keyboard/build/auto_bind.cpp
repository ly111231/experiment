#include <nvboard.h>
#include "Vtop.h"

void nvboard_bind_all_pins(Vtop* top) {
	nvboard_bind_pin( &top->reset, 1, SW0);
	nvboard_bind_pin( &top->kbd_clk, 1, PS2_CLK);
	nvboard_bind_pin( &top->kbd_data, 1, PS2_DAT);
	nvboard_bind_pin( &top->seg0, 8, SEG0A, SEG0B, SEG0C, SEG0D, SEG0E, SEG0F, SEG0G, DEC0P);
	nvboard_bind_pin( &top->seg1, 8, SEG1A, SEG1B, SEG1C, SEG1D, SEG1E, SEG1F, SEG1G, DEC1P);
	nvboard_bind_pin( &top->seg2, 8, SEG2A, SEG2B, SEG2C, SEG2D, SEG2E, SEG2F, SEG2G, DEC2P);
	nvboard_bind_pin( &top->seg3, 8, SEG3A, SEG3B, SEG3C, SEG3D, SEG3E, SEG3F, SEG3G, DEC3P);
	nvboard_bind_pin( &top->seg4, 8, SEG4A, SEG4B, SEG4C, SEG4D, SEG4E, SEG4F, SEG4G, DEC4P);
	nvboard_bind_pin( &top->seg5, 8, SEG5A, SEG5B, SEG5C, SEG5D, SEG5E, SEG5F, SEG5G, DEC5P);
	nvboard_bind_pin( &top->ready, 1, LD15);
	nvboard_bind_pin( &top->overflow, 1, LD14);
	nvboard_bind_pin( &top->stata, 4, LD3, LD2, LD1, LD0);
}
