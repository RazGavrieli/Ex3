
main.c: 
	gcc -c main.c

main.o: main.c
	gcc main.c -o stringProg

make all: main.o

make clean: 
	rm -f a.out *.txt *.o