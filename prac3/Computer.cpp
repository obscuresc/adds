// Computer.cpp
#include "Computer.h"

Computer::Computer() {

	moves[0] = rock;
	moves[1] = rock;
	moves[2] = rock;

}


int Computer::getMove(int moveID) {

	// function guard
	const int numMoves = 3;
	if(moveID >= numMoves) return -1;
	else return moves[moveID];

}
