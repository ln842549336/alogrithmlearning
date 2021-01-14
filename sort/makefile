objs = bubblesort.o selectionsort.o

all:sorttest

.PHONY:all

sorttest:$(objs)
	gcc -g -DDebug -o test.out test.c $(objs)
 
bubblesort.o:bubblesort.h bubblesort.c
	gcc -g -DDebug -c bubblesort.c

selectionsort.o:selectionsort.h selectionsort.c
	gcc -g -DDebug -c selectionsort.c


.PHONY:clean

clean:
	rm *.o *.out

