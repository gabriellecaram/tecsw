programa: programa.o estatistica.o
	gcc programa.o estatistica.o -o programa

estatistica.o: estatistica.c estatistica.h
	gcc estatistica.c

programa.o: programa.c estatistica.h
	gcc -c programa.c

clean:
	rm programa *.o
