#include <cstdlib>
#include <iostream>
#include <vector>

#include "MapGeneric.h"
#include "MapAbsoluteValue.h"
#include "MapSquare.h"
#include "MapTriple.h"

#include "FilterGeneric.h"

#include "ReduceGeneric.h"

// correct number of arguments, 1 for program name, 20 for vector
#define correctNumArgs 21 

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
	for(size_t i = 1; i < (size_t) argc; i++)
		L.at(i) = atoi(argv[i]);

	// create map objects
	MapAbsoluteValue mav;
	MapSquare ms;
	MapTriple mt;

	std::vector<int> Ldash;
	std::cout << "Main.cpp" << std::endl;

	return 0;
}
