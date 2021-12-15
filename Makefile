.PHONY: clean all

CC = gcc
AR = ar -rcs
FLAGS = -Wall -g

main.o: main.c
	$(CC) $(FLAGS) -c main.c

stringProg: main.o 
	$(CC) $(FLAGS) main.o -o stringProg -lm

all: stringProg

clean: 
	rm -f *.a *.o stringProg