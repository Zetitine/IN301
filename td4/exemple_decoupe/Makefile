plim.o : plim.c
	gcc -c plim.c -o plim.o

plam.o : plam.c
	gcc -c plam.c -o plam.o

ploum.o : ploum.c  plim.h plam.h
	gcc -c ploum.c -o ploum.o

all : ploum.o plim.o plam.o
	gcc ploum.o plim.o plam.o -o exe

clean :
	rm -f *.o
	rm -f exe
