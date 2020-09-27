// Rearrange.cpp

#include "Rearrange.h"


Individual Rearrange::mutate(Individual individual, int k) {

	// moderate k to be within the size of the individual bitstring
	int newK = k % individual.getLength();

	// get bit starting from newK and build new string
	std::string tempBitString = "";
	

	// instantiate new individual with new string and return
}
