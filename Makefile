all:
	gcc -Wall -I/home/ritesh/gsl/include -c main.c
	gcc -L/home/ritesh/gsl/lib main.o -lgsl -lgslcblas -lm
