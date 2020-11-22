// Tournament.h
#ifndef _TOURNAMENT_H
#define _TOURNAMENT_H

#include <vector>

#include "Player.h"
#include "Referee.h"

class Tournament {

	public:
		static void enterPlayer(Player*);	
		static void compete();
		static int getWinner();

	private:
		Tournament() {};
		static std::vector<Player*> playerDraw;
	
};

#endif // _TOURNAMENT_H
