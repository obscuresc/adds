// Human.cpp
#include "Human.h"

int Human::getMove() {

	int move = 0;
	while(move != rock || move != paper || move != scissors) {

		std::cout << "[r]ock, [p]aper, [s]cissors" << std::endl;
		move = getchar();
	}

	return move;

}


std::string Human::getName() {

	return std::string("Human");

}
