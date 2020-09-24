// BitFlipProb.cpp
#include "BitFlipProb.h"

BitFlipProb::BitFlipProb(double input) {

	// source new seed on call of program
	// not necessary but trying it out
	srand(time(NULL));
	p = input;

}


Individual BitFlipProb::mutate(Individual individual) {

	for(size_t i = 0; i < individual.getLength(); i++) {
	
		// get random number float from 0 to 1
		float probabilityRoll = (float) rand() / RAND_MAX;
		
		if(probabilityRoll < this->p) individual.flipBit(i);
	
	}

	return individual;

}
