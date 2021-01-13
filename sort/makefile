all:sorttest

.PHONY:all

sorttest:bubblesort.o
	gcc -g -DDebug -o test.out test.c bubblesort.o
 
bubblesort.o:bubblesort.h bubblesort.c
	gcc -g -DDebug -c bubblesort.c


.PHONY:clean

clean:
	rm *.o *.out

