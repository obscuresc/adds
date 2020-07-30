#include <cstdlib>
#include <iostream>

#include "EfficientFibonacci.h"
#include "Fibonacci.h"
#include "Reverse.h"

int main(int argc, char** argv) {

	// terminate if number of arguments provided is incorrect	
	if(argc != 5) {
		std::cout << "ERROR" << std::endl;
		return -1;
	}

	// instantiate objects for method access
	Reverse reverse;
	Fibonacci fibonacci;
	EfficientFibonacci efficientFibonacci;

	// run integer reverse
	std::string arg1 = std::string(argv[1]);
	std::cout << reverse.reverseDigit(std::stoi(arg1)) << std::endl;
	
	// run string reverse
	std::cout << reverse.reverseString(std::string(argv[2])) << std::endl;

	// run Fibonacci
	std::cout << fibonacci.calculate(std::stoi(argv[3])) << std::endl;

	// run EfficientFibonacci
	std::cout << efficientFibonacci.calculate(std::stoi(argv[4])) << std::endl; 
 
}
