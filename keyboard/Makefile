TOPNAME = top
NXDC_FILES = constr/top.nxdc
INC_PATH ?=

VERILATOR = verilator
VERILATOR_CFLAGS += -MMD --build -cc  \
				-O3 --x-assign fast --x-initial fast --noassert

BUILD_DIR = ./build
OBJ_DIR = $(BUILD_DIR)/obj_dir
BIN = $(BUILD_DIR)/$(TOPNAME)

SIM_DIR = ./sim_dir
SIM_BIN = $(SIM_DIR)/V$(TOPNAME)

default: $(BIN)

$(shell mkdir -p $(BUILD_DIR))

# constraint file
SRC_AUTO_BIND = $(abspath $(BUILD_DIR)/auto_bind.cpp)
$(SRC_AUTO_BIND): $(NXDC_FILES)
	python3 $(NVBOARD_HOME)/scripts/auto_pin_bind.py $^ $@

# project source
VSRCS = $(shell find $(abspath ./vsrc) -name "*.v")
CSRCS = $(shell find $(abspath ./csrc) -name "*.c" -or -name "*.cc" -or -name "*.cpp")
CSRCS += $(SRC_AUTO_BIND)

# rules for NVBoard
include $(NVBOARD_HOME)/scripts/nvboard.mk

# rules for verilator
INCFLAGS = $(addprefix -I, $(INC_PATH))
CXXFLAGS += $(INCFLAGS) -DTOP_NAME="\"V$(TOPNAME)\""

$(BIN): $(VSRCS) $(CSRCS) $(NVBOARD_ARCHIVE)
	@rm -rf $(OBJ_DIR)
	$(VERILATOR) $(VERILATOR_CFLAGS) \
		--top-module $(TOPNAME) $^ \
		$(addprefix -CFLAGS , $(CXXFLAGS)) $(addprefix -LDFLAGS , $(LDFLAGS)) \
		--Mdir $(OBJ_DIR) --exe -o $(abspath $(BIN)) --trace

all: default

run: $(BIN)
	@$^

sim: waveform.vcd

waves: waveform.vcd
	@echo
	@echo "### WAVES ###"
	gtkwave waveform.vcd

waveform.vcd: $(SIM_BIN)
	@echo
	@echo "### SIMULATING ###"
	@$(SIM_BIN) 

$(SIM_BIN): .stamp.verilate
	@echo
	@echo "### BUILDING SIM ###"
	make -C $(SIM_DIR) -f V$(TOPNAME).mk V$(TOPNAME)

.stamp.verilate: $(VSRCS) ./csrc/tb_$(TOPNAME).cpp
	@echo
	@echo "### VERILATING ###"
	verilator -Wall --Mdir $(SIM_DIR) --timescale 1ns/1ps --trace --timing --top-module $(TOPNAME) -cc $(VSRCS) --exe ./csrc/tb_$(TOPNAME).cpp
	@touch .stamp.verilate

clean:
	rm -rf $(BUILD_DIR)
	rm -rf waveform.vcd
	rm -rf .stamp.verilate
	rm -rf $(SIM_DIR)

lint: $(VSRCS)
	verilator --lint-only $^ --timing

.PHONY: default all clean run lint sim waves