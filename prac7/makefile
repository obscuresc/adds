CC = g++
CFLAGS = -c
LFlAGS = -o

main: main.o Individual.o
	$(CC) $(LFLAGS) $@ $^

main.o: main.cpp
	$(CC) $(CFLAGS) $^

Individual.o: Individual.cpp
	$(CC) $(CFLAGS) $^
