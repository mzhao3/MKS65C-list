all: list.o main.c
	gcc list.o main.c

list.o: list.c list.h
	gcc -c list.c

run:
		./a.out
