// Crescendo.cpp
#include "Crescendo.h"

Crescendo::Crescendo() {

	// assign moves
	moves[0] = paper;
	moves[1] = scissors;
	moves[2] = rock;

}


std::string Crescendo::getName() {

	return std::string("Crescendo");

}
