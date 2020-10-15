CC = g++
CFLAGS = -c
LFLAGS = -o

main: main.o Sort.o BubbleSort.o RecursiveBinarySearch.o QuickSort.o
	$(CC) $(LFLAGS) $@ $^

main.o: main.cpp
	$(CC) $(CFLAGS) $^

Sort.o: Sort.cpp
	$(CC) $(CFLAGS) $^

BubbleSort.o: BubbleSort.cpp
	$(CC) $(CFLAGS) $^

RecursiveBinarySearch.o: RecursiveBinarySearch.cpp
	$(CC) $(CFLAGS) $^

QuickSort.o: QuickSort.cpp
	$(CC) $(CFLAGS) $^

clean:
	rm -f *.o main
