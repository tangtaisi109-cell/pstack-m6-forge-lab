.POSIX:
CC = cc
CFLAGS = -std=c11 -Wall -Wextra -O2 -Iinclude

all: bin/m7calc

bin/m7calc: src/main.c src/calc.c include/calc.h
	mkdir -p bin
	$(CC) $(CFLAGS) -o $@ src/main.c src/calc.c

bin/calc_test: src/calc_test.c src/calc.c include/calc.h
	mkdir -p bin
	$(CC) $(CFLAGS) -o $@ src/calc_test.c src/calc.c

test: bin/calc_test
	./bin/calc_test

clean:
	rm -rf bin

.PHONY: all test clean
