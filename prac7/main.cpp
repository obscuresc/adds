#include <iostream>

#include "Individual.h"
#include "Mutator.h"
#include "BitFlip.h"
#include "BitFlipProb.h"

#define correctNArgs 5


Individual* execute(Individual * ptrIndividual, Mutator* ptrMutator, int k) {

	// call mutator on the given individual using provided parameters
	Individual* ptrExecutedIndividual = new Individual(std::string());
	*ptrExecutedIndividual = ptrMutator->mutate(*ptrIndividual, k);
	return ptrExecutedIndividual;

}


int main(int argc, char * argv[]) {

	// call guard
	if(argc != correctNArgs) {
	
		std::cout << "Incorrect number of arguments" << std::endl;
		return -1;

	}


	// invalid argument guard
	// need to ensure that input strings only contain 1's or 0's
	// probably best validated by looking at char array
	
	// create objects
	std::string temp = std::string(argv[1]);
	Individual individual1(5);
	std::cout << individual1.getString() << std::endl;

}
