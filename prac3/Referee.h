// Referee.h
#ifndef _REFEREE_H
#define _REFEREE_H

#include "Player.h"

class Referee {

	public:
		Player* match(Player*, Player*);
	
	private:
		int round(Player*, Player*, int);
};

#endif // _REFEREE_H
