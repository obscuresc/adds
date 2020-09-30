CC = g++
CFLAGS = -c
LFLAGS = -o

main: main.o RecursiveBinarySearch.o
	$(CC) $(LFLAGS) $@ $^

main.o: main.cpp
	$(CC) $(CFLAGS) $^

RecursiveBinarySearch.o: RecursiveBinarySearch.cpp
	$(CC) $(CFLAGS) $^

clean:
	rm -f *.o main
