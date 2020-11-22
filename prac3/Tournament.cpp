// Tournament.cpp
#include "Tournament.h"

std::vector<Player*> Tournament::playerDraw;


void Tournament::enterPlayer(Player* newPlayer) {

	// insert player into draw
	playerDraw.push_back(newPlayer);	
}


void Tournament::compete() {

	// repeat until 1 left
	while(playerDraw.size() > 1) {

		// pair players and match in a contest
		size_t winner = 0;
		for(size_t i = 0; i < playerDraw.size(); i++) {

			// delete losing players from the draw
			winner = Referee::match(playerDraw.at(i), playerDraw.at(i + 1));
			if(winner == 1)	playerDraw.erase(playerDraw.begin() + i);
			else playerDraw.erase(playerDraw.begin() + i + 1);
		}
	}
}


Player* Tournament::getWinner() {

	// function guard
	if(playerDraw.size() != 1) return (Player*) nullptr;

	// winner should be 0th in the draw	
	return playerDraw.at(0);
}
