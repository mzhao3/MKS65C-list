all: run
	./a.out

run: list.o main.c
	gcc list.o main.c

list.o: list.c list.h
	gcc -c list.c
