CC = g++
CFLAGS = -c
LFLAGS = -o

main: main.o Mutator.o Individual.o BitFlip.o BitFlipProb.o Rearrange.o
	$(CC) $(LFLAGS) $@ $^

main.o: main.cpp
	$(CC) $(CFLAGS) $^ 

Individual.o: Individual.cpp
	$(CC) $(CFLAGS) $^

Mutator.o: Mutator.cpp
	$(CC) $(CFLAGS) $^

BitFlip.o: BitFlip.cpp
	$(CC) $(CFLAGS) $^

BitFlipProb.o: BitFlipProb.cpp
	$(CC) $(CFLAGS) $^

Rearrange.o: Rearrange.cpp
	$(CC) $(CFLAGS) $^

clean:
	rm -f *.o main
