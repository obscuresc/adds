// ReduceGeneric.cpp
#include "ReduceGeneric.h"

int ReduceGeneric::reduce(std::vector<int> input) {

	return reduceHelper(&input, 0);

}

int ReduceGeneric::reduceHelper(std::vector<int>* input, size_t index) {

	// base case
	if(index == input->size() - 1) return *input->end();

	// recursive case
	return binaryOperator(input->at(index), input->at(index + 1));

}
