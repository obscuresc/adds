// BitFlip.cpp

#include "BitFlip.h"


Individual BitFlip::mutate(Individual individual, int k) { 

	int wrappedIndex = k % individual.getLength();
	individual.flipBit(wrappedIndex);
	return individual;

}

