// ReduceGCD.cpp
#include "ReduceGCD.h"

int ReduceGCD::reduceHelper(std::vector<int>* input, size_t gcd) {

	#ifdef DEBUG
		std::cout << "ReduceGCD helper" << std::endl;
		for(size_t i = 0; i < input->size(); i++) {
			std::cout << input->at(i) << ", ";
		}
		std::cout << "\b\b" << std::endl;
	#endif // DEBUG

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

	#ifdef DEBUG
		std::cout << "ReduceGCD binaryOperator: " << x << ", " << y << std::endl;
	#endif // DEBUG

	// base cases
	if(x == 0) return y;
	if(y == 0) return x;

	// recursive case
	#ifdef DEBUG
		std::cout << "new call: " << y << ", " << y % x << std::endl;
	#endif // DEBUG
	return binaryOperator(y, x % y);
}
