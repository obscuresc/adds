// Rearrange.cpp

#include "Rearrange.h"


Individual Rearrange::mutate(Individual individual, int k) {

	// get bit starting from newK and build new string
	std::string tempBitString = "";
	int i = k;
	while(i != k - 1) {

		tempBitString.push_back(individual.getBit(k));
		i = (i + 1) % k;
	}

	// instantiate new individual with new string and return
	return Individual(tempBitString);
}
