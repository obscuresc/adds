// Tournament.cpp
#include "Tournament.h"

std::vector<Player*> Tournament::playerDraw;

void Tournament::enterPlayer(Player* newPlayer) {

	// insert player into draw
	playerDraw.push_back(newPlayer);	
}


void Tournament::compete() {

	std::cout << "Compete" << std::endl;

}

int Tournament::getWinner() {

	return 3;
}
