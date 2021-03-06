// EfficientFibonacci.cpp

#include "EfficientFibonacci.h"

EfficientFibonacci::EfficientFibonacci() {

	// clear storage just to be sure
	storage.clear();

	// add base cases
	storage.push_back(0);
	storage.push_back(1);

}


long unsigned int EfficientFibonacci::calculate(long unsigned int input) {

	// base cases 0th and 1st in sequence
	if(input < 2) return storage.at(input);

	// stored cases
	if(storage.size() > input) return storage.at(input);

	// create new member in storage
	storage.push_back(storage.at(storage.size() - 1) + storage.at(storage.size() - 2));

	// try again for a stored member
	return calculate(input);

}
