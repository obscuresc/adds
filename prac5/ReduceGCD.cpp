// ReduceGCD.cpp
#include "ReduceGCD.h"

int ReduceGCD::reduceHelper(std::vector<int>* input, size_t gcd) {

	// function guard
	if(input->size() == 0) return 0;
	if(input->size() == 1) return input->size();

	gcd = binaryOperator(input->at(0), input->at(1));
	for(size_t i = 2; i < input->size(); i++) {

		gcd = binaryOperator(input->at(i), gcd);
	}

	return gcd;
}


int ReduceGCD::binaryOperator(int x, int y) {

	// base cases
	if(x % y == 0) return x / y;
	if(y % x == 0) return y / x;

	// recursive case
	return binaryOperator(y, y % x);
}
