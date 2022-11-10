verilator -Wall --trace -cc --Wno-lint $@ --exe Top.cpp
make -C obj_dir -f VTop.mk VTop
./obj_dir/VTop &> nrv.log
