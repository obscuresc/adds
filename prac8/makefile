CC = g++
CFLAGS = -c
LFLAGS = -o

main: main.o BubbleSort.o RecursiveBinarySearch.o
	$(CC) $(LFLAGS) $@ $^

main.o: main.cpp
	$(CC) $(CFLAGS) $^

BubbleSort.o: BubbleSort.cpp
	$(CC) $(CFLAGS) $^

RecursiveBinarySearch.o: RecursiveBinarySearch.cpp
	$(CC) $(CFLAGS) $^

clean:
	rm -f *.o main
