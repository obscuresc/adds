CC = g++
CFLAGS = -c

main: main.o Fibonacci.o Reverse.o
	$(CC) -o $@ $^

main.o: main.cpp
	$(CC) $(CFLAGS) $^

Fibonacci.o: Fibonacci.cpp
	$(CC) $(CFLAGS) $^

Reverse.o: Reverse.cpp
	$(CC) $(CFLAGS) $^

clean:
	rm -f *.o main
