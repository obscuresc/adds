// RandomComputer.cpp
#include "RandomComputer.h"

RandomComputer::RandomComputer() {

	// seed random
	srand(time(NULL));

	// assign moves randomly
	moves[0] = rock;
	moves[1] = rock;
	moves[2] = rock;

}


std::string RandomComputer::getName() {

	return std::string("RandomComputer");

}
