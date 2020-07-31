// BitFlip.cpp

#include "BitFlip.h"

Individual BitFlip::mutator(Individual individual, int k) {

	int wrappedIndex = k % individual.getLength()
	individual.flipBit(wrappedIndex);
	return individual;

}
