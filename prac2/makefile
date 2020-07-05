CC = g++

main: main.o human.o computer.o
	$(CC) -o $@ $^ 

main.o: main.cpp human.h computer.h 
	$(CC) -c main.cpp

human.o: human.cpp 
	$(CC) -c $^ 

computer.o: computer.cpp 
	$(CC) -c $^ 

re: clean main

clean:
	rm -f *.o main
