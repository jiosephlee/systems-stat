ifeq ($(DEBUG), true)
	CC = gcc -g
else
	CC = gcc
endif

all: main.o functions.o
	$(CC) -o program main.o functions.o

main.o: main.c header.h
	$(CC) -c main.c

functions.o: functions.c header.h
	$(CC) -c functions.c

run: all
	./program

clean:
	rm *.o
	rm a.out
