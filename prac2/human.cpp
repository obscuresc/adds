/* Human class

Designed for playing 'Rock, paper, scissors', the human class takes a set number of moves to play against other players.

*/

#include "human.h"

human::human() {

	std::string input;
	std::getline(std::cin, input);
	std::stringstream ssTokens(input);
	std::string intermediate;

	bool firstToken = true;

	while(getline(ssTokens, intermediate, ' ')) 
    { 
		if(firstToken) {
			
			if(stoi(intermediate)) {

				nMoves = stoi(intermediate);

			}

			else {

				std::cout << "Incorrect input" << std::endl;

			}
		}
		
		else {

	        moveSet.push_back(intermediate.at(0)); 
		}

    }

}


std::string human::getMoves() {

	return moveSet;
}
