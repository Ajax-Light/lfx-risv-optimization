# Sample RISC-V assembly optimization notes

This repository contains testing and sample RISC-V assembly code targeting a
few optimization scenarios.

## Directory structure

1. `src` contains RISC-V assembly for various optimization scenarios. Each
   program has comments describing the intended optimization(s).

2. `test` contains C code exercising the above binaries. Run `make all` from
   this directory to compile all tests and run `make run` to see their output.
