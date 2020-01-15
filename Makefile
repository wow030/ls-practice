all: main.o
	gcc -o my-ls main.o
main.o: main.c
	gcc -c main.c
clean:
	rm -f *.o *.exe