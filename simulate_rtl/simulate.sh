verilator -Wall --trace -cc --Wno-lint Top.v sram.v sram_top.v --exe Top.cpp
make -C obj_dir -f VTop.mk VTop
./obj_dir/VTop