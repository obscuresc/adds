// Tournament.cpp
#include "Tournament.h"

void Tournament::enterPlayer(Player* newPlayer) {

	// insert player into draw
	playerDraw.push_back(newPlayer);	
}


void Tournament::compete() {

	std::cout << "Compete" << std::endl;

}

Player* Tournament::getWinner() {

	return new Player();
}
