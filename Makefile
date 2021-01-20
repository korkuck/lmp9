main: main.o debug.o read.o
	cc -o main main.o debug.o read.o

main.o: main.c header.h
debug.o: debug.c header.h
read.o: read.c header.h
