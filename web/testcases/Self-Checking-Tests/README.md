# Self-Checking-Tests

This repository includes self checking tests that which help in verification of SoC. The tests have been simulated on an Instruction set simulator (ISS) using which a dump has been created for each test. Running the same tests on the SoC and then comparing the dump files will help us verify the SoC output.


# Steps to generate dump file using ISS simulator

## Generate elf file from the test file

      riscv32-unknown-elf-gcc -g -Og -o test.o -c test.c
      riscv32-unknown-elf-gcc -g -Og -T test.ld -nostartfiles -o test test.o
## Simulate the elf file

    spike --rbb-port=9824 -m0x80000000:0x20000 test

## Connecting to GDB
Without closing the simulation terminal, **In a second terminal run:**

    openocd -f openocd.cfg

Now we can connect to gdb. To do this, **In another terminal run:**

    riscv32-unknown-elf-gdb test

## Debugging and generating dump file:
To establish a link with simulated elf file of test file, type in:

     target remote localhost:3333
Before generating the signature we need to run the test file:

 - Create a breakpoint
 - Type in C to run the code till the breakpoint

Now we can generate the signature file:

    dump verilog memory test.dump 0x80000000 0x80000fff

