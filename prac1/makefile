CC = g++
CFLAGS = -Wall

TARGET = main

all: main

main: main.o Palindrome.o
	$(CC) $(CFLAGS) -o main main.cpp Palindrome.o

Palindrome.o: Palindrome.h
	$(CC) $(CFLAGS) -c Palindrome.cpp

clean:
	rm -rf *.o main
