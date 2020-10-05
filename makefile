euler: main.c euler.o
	gcc main.c -o euler euler.o

euler.o: euler.c
	gcc -c euler.c euler.h