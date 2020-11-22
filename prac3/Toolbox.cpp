// Toolbox.cpp
#include "Toolbox.h"

Toolbox::Toolbox() {

	// assign moves
	moves[0] = scissors;
	moves[1] = scissors;
	moves[2] = scissors;

}


std::string Toolbox::getName() {

	return std::string("Toolbox");

}
