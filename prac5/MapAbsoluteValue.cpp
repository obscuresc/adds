// MapAbsoluteValue.cpp
#include "MapAbsoluteValue.h"

std::vector<int> MapAbsoluteValue::map(std::vector<int> input) {

	for(size_t i = 0; i < input.size(); i++)
		input.at(i) = f(input.at(i));

	return input;
}


int MapAbsoluteValue::f(int input) {

	return abs(input);
}
