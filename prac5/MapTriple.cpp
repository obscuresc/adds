// MapTriple.h
#include "MapTriple.h"

std::vector<int> MapTriple::map(std::vector<int input) {

	for(size_t i = 0; i < input.size(); i++) {
		input.at(i) = f(input.at(i));
	
	return input;
}


int MapTriple::f(int input) {

	const int triple = 3;
	return triple * 3;
}
