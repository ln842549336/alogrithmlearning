all:logtest

.PHONY:all

logtest:logtest.o
	gcc -g -DDebug -o logtest.out logtest.c
 
logtest.o:log.h logtest.c
	gcc -g -DDebug -c logtest.c


.PHONY:clean

clean:
	rm *.o *.out
