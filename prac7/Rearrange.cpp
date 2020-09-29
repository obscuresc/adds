// Rearrange.cpp

#include "Rearrange.h"


Individual Rearrange::mutate(Individual individual, int k) {

	// get bit starting from newK and build new string
	std::string tempBitString = "";
	int i = k;
	while(i != k - 1) {
		
		tempBitString.append(std::to_string(individual.getBit(i)));
		i = (i + 1) % individual.getLength();

	}

	// instantiate new individual with new string and return
	return Individual(tempBitString);
}
