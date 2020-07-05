/* Computer class

Designed for playing 'Rock, paper, scissors', the computer class takes a set number of moves to play against other players using only the 'rock' move.

*/

#include "computer.h"

computer::computer(unsigned int nMoves) {

	moveSet = std::string((size_t) nMoves, 'R');

}


std::string computer::getMoves() {

	return moveSet;
}
