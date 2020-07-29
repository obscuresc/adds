// EfficientFibonacci.h

#ifndef EFFICIENTFIBONACCI_H
#define EFFICIENTFIBONACCI_H

#include "Fibonacci.h"

#include <vector>

class EfficientFibonacci : public Fibonacci {

	public:
		EfficientFibonacci();

	private:
		std::vector<long unsigned int> storage;

};

#endif // EfficientFibonacci.h
