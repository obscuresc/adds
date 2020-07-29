// Fibonacci.cpp

#include "Fibonacci.h"

long unsigned int Fibonacci::calculate(long unsigned int input) {

	// base case for 0th in sequence
	if(input == 0) return 0;
	
	// base case for 1st in sequence
	if(input == 1) return 1;

	// recursive case
	return calculate(input - 1) + calculate(input -2);


}
