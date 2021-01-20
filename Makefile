main: main.o debug.o read.o podstawianie.o
	cc -o main main.o debug.o read.o podstawianie.o

main.o: main.c header.h
debug.o: debug.c header.h
read.o: read.c header.h
podstawianie.o: podstawianie.c header.h
