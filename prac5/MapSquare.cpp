// MapGeneric.cpp
#include "MapSquare.h"

std::vector<int> MapSquare::map(std::vector<int> input) {

	for(size_t i = 0; i < input.size(); i++) 
		input.at(i) = input.at(i) * input.at(i);

	return input;
}


int MapSquare::f(int input) {

	return input * input;
}
