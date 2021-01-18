objs = bubblesort.o selectionsort.o insertionsort.o\
	   shellsort.o quicksort.o

all:sorttest

.PHONY:all

sorttest:$(objs)
	gcc -g -DDebug -o test.out test.c $(objs)
 
bubblesort.o:bubblesort.h bubblesort.c
	gcc -g -DDebug -c bubblesort.c

selectionsort.o:selectionsort.h selectionsort.c
	gcc -g -DDebug -c selectionsort.c

insertionsort.o:insertionsort.h insertionsort.c	
	gcc -g -DDebug -c insertionsort.c

shellsort.o:shellsort.h shellsort.c
	gcc -g -DDebug -c shellsort.c

quicksort.o:quicksort.h quicksort.c
	gcc -g -DDebug -c quicksort.c

.PHONY:clean

clean:
	rm *.o *.out

