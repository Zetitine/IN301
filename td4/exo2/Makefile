circonference.o : circonference.c pi.h
	gcc -c circonference.c -o circonference.o

surface.o : surface.c pi.h
	gcc -c surface.c -o surface.o

principal.o : principal.c circonference.c surface.c pi.h
	gcc -c principal.c -o principal.o

all : principal.o surface.o circonference.o pi.h
	gcc principal.o surface.o circonference.o pi.h -o exe

clean :
	rm -f *.o
