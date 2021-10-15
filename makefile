all: structy.o
	gcc -o structy structy.o
structy.o: structy.c
	gcc -c structy.c
run:
	./struct
clean:
	rm *.o
