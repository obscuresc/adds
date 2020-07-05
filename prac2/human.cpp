/* Human class

Designed for playing 'Rock, paper, scissors', the human class takes a set number of moves to play against other players.

*/

#include "human.h"

std::string human::getMoves() {

	return moveSet;
}


void human::setMoves() {

	std::string input;
	std::getline(std::cin, input);

	// get number of moves from the string
	nMoves = atoi(input.substr(0, 1).c_str());

	// clear space characters
	for(int i = 0; i < input.length(); i++) {

		if(((int) input.at(i)) == ' ') {

			input.erase(i);
			i--;

		}

	}

};
