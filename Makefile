CFLAGS=-Wall -g

all: ex1 ex5 ex6 ex7

clean:
	rm -rf *.dSYM
	find . -type f -not -name '*.c' -not -name 'Makefile' | xargs rm

