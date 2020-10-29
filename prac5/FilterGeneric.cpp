// FilterGeneric.cpp
#include "FilterGeneric.h"

std::vector<int> FilterGeneric::filter(std::vector<int> input) {

	filterHelper(&input, 0);
	return input;
}


void FilterGeneric::filterHelper(std::vector<int>* input, size_t index) {

	// base case
	if(index == input->size()) return;

	// recursive case
	if(g(input->at(index))) {
		input->erase(input->begin() + index);
		index--;
	}

	index++;
	filterHelper(input, index);
}
