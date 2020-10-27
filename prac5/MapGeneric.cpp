// MapGeneric.cpp
#include "MapGeneric.h"

std::vector<int> MapGeneric::map(std::vector<int> input) {

	mapHelper(&input, 0);
	return input;

}


void MapGeneric::mapHelper(std::vector<int>* input, size_t index) {

	// base case
	if(index == input->size()) return;

	// recursive case
	input->at(index) = f(input->at(index));
	mapHelper(input, index + 1);

}
