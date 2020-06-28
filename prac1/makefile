CPC = g++
CFLAGS = -Wall

TARGET = main

all: main

main: main.o Palindrome.o
	$(CPC) $(CFLAGS) -o main main.cpp Palindrome.o

Palindrome.o: Palindrome.h
	$(CPC) $(CFLAGS) -c Palindrome.cpp

clean:
	rm -rf *.o main
