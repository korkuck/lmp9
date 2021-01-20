main: main.o debug.o read.o podstawianie.o schodkowanie.o
	cc -o main main.o debug.o read.o podstawianie.o schodkowanie.o
	rm *.o

main.o: main.c header.h
debug.o: debug.c header.h
read.o: read.c header.h
podstawianie.o: podstawianie.c header.h
schodkowanie.o: schodkowanie.c header.h

default: clean
