CC = g++

main: main.o human.o
	$(CC) -o main.o human.o

main.o: main.cpp 
	$(CC) -c main.cpp

human.o: human.cpp human.h
	$(CC) -c human.cpp

re: clean main

clean:
	rm *.o main
