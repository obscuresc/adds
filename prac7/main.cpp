#include <iostream>

#include "Individual.h"
#include "Mutator.h"
#include "BitFlip.h"
#include "BitFlipProb.h"
#include "Rearrange.h"

#define correctNArgs 5


Individual* execute(Individual* ptrIndividual, Mutator* ptrMutator, int k) {

	// call mutator on the given individual using provided parameters
	Individual* ptrExecutedIndividual = new Individual(std::string());
	*ptrExecutedIndividual = ptrMutator->mutate(*ptrIndividual, k);
	return ptrExecutedIndividual;

}


int main(int argc, char* argv[]) {

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
	Individual individual1(temp);
	temp = std::string(argv[1]);
	Individual individual2(temp);
	
	// grab integers from program call
	int k1 = 0;
	int k2 = 0;
	sscanf(argv[2], "%d", &k1);
	sscanf(argv[4], "%d", &k2);

	// create mutators
	BitFlip bf;
	double p = 0.1;
	BitFlipProb bfp(p);
	Rearrange rar;
	
	// mutate
	Individual * ptrIndividual1 = execute(&individual1, &bf, k1);
	Individual * ptrIndividual2 = execute(&individual2, &rar, k2);

	// print
	std::cout << ptrIndividual1->getString() << " ";
	std::cout << ptrIndividual2->getString() << " ";
	std::cout << ptrIndividual2->getMaxOnes() << std::endl;

	// clean up
	delete ptrIndividual1;
	delete ptrIndividual2;
}
