// EfficientFibonacci.h

#ifndef EFFICIENTFIBONACCI_H
#define EFFICIENTFIBONACCI_H

#include <vector>

#include "Fibonacci.h"


class EfficientFibonacci : public Fibonacci {

	public:
		EfficientFibonacci();
		long unsigned int calculate(long unsigned int);

	private:
		std::vector<long unsigned int> storage;

};

#endif // EfficientFibonacci.h
