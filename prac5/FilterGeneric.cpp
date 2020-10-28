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
	input->at(index) = g(input->at(index));
	filterHelper(input, index + 1);

}
