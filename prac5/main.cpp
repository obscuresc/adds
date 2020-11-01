#include <cstdlib>
#include <iostream>
#include <vector>

#include "MapGeneric.h"
#include "MapAbsoluteValue.h"
#include "MapSquare.h"
#include "MapTriple.h"

#include "FilterGeneric.h"
#include "FilterOdd.h"
#include "FilterNonPositive.h"
#include "FilterForTwoDigitPositive.h"

#include "ReduceGeneric.h"
#include "ReduceMinimum.h"
#include "ReduceGCD.h"


// correct number of arguments, 1 for program name, 20 for vector
#define correctNumArgs 21 


void printVector(std::vector<int>* input) {

	for(size_t i = 0; i < input->size(); i++) {
		std::cout << input->at(i);
		if(i != input->size() - 1) std::cout << ", ";
	}
	
	std::cout << std::endl;
}

int main(int argc, char* argv[]) {

	// program guard
	if(argc != correctNumArgs)
	{
		std::cout << "Incorrect number of arguments." << std::endl;
		return -1;
	}

	// load vector
	// atoi is not particularly robust but not interested in fixing it
	// exclude 0th arg as is the program name
	std::vector<int> L(20);
	#ifdef DEBUG
		std::cout << "Argv vals" << std::endl;
	#endif // DEBUG
	for(size_t i = 1; i < (size_t) argc; i++) {

		#ifdef DEBUG
			std::cout << argv[i] << ", "; 
		#endif // DEBUG
		L.at(i - 1) = atoi(argv[i]);
	}

	#ifdef DEBUG
		std::cout << "Argument vector" << std::endl;
		printVector(&L);
	#endif // DEBUG

	// create map objects
	MapAbsoluteValue mav;
	MapSquare ms;
	MapTriple mt;
	
	// run map square as a test
	#ifdef DEBUG
		std::cout << "L after map square for test" << std::endl;
		std::vector<int> mapSquareResult = ms.map(L);
		printVector(&mapSquareResult);
	#endif // DEBUG

	// first map per spec
	std::vector<int> Ldash = mav.map(L);
	#ifdef DEBUG
		std::cout << "L dash after map abs" << std::endl;
		printVector(&Ldash);
	#endif // DEBUG

	// second map per spec
	Ldash = mt.map(Ldash);
	#ifdef DEBUG
		std::cout << "L dash after map triple" << std::endl;
		printVector(&Ldash);
	#endif // DEBUG
	
	// create filter objects
	FilterOdd fo;
	FilterNonPositive fnp;
	FilterForTwoDigitPositive ftdp;

	// first filter per spec
	std::vector<int> Ldashdash = ftdp.filter(Ldash);
	#ifdef DEBUG
		std::cout << "Ldash after filter two-digitive positive" << std::endl;
	#endif // DEBUG

	// second filter per spec
	Ldashdash = fo.filter(Ldashdash);
	#ifdef DEBUG
		std::cout << "Ldashdash" << std::endl;
	#endif // DEBUG

	return 0;
}
