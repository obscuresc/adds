CC = g++
CFLAGS = -c

main: main.o Reverse.o
	$(CC) -o $@ $^

main.o: main.cpp
	$(CC) $(CFLAGS) $^

Reverse.o: Reverse.cpp
	$(CC) $(CFLAGS) $^

clean:
	rm -f *.o main
