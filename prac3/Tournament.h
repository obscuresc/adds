// Tournament.h
#ifndef _TOURNAMENT_H
#define _TOURNAMENT_H

#include "Player.h"

class Tournament {

	public:
		static void enterPlayer(Player*);	
		static void compete();
		static Player* getWinner();

	private:
		Tournament() {};
		std::vector<Player*> playerDraw;
	
};

#endif // _TOURNAMENT_H
