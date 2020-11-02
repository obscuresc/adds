// ReduceMinimum.cpp
#include "ReduceMinimum.h"

int ReduceMinimum::binaryOperator(int x, int y) {

	return (x < y) ? x : y;
}


int ReduceMinimum::reduceHelper(std::vector<int>* input, size_t index) {

	// base case
	if(index == input->size() - 1) return *input->end();

	// recursive case
	return binaryOperator(input->at(index), input->at(index + 1));

}
