.PHONY: all clean

clean:
	find . -type f -executable | xargs rm

all: test1 test2

run: test1 test2
	time ./test1
	time ./test2

test1:
	riscv64-unknown-elf-gcc test-optimized-1.c ../src/optimized.s -o test1

test2:
	riscv64-unknown-elf-gcc test-optimized-2.c ../src/optimized.s -o test2
