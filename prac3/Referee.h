// Referee.h
#ifndef _REFEREE_H
#define _REFEREE_H

#include "Player.h"

class Referee {

	public:
		static size_t match(Player*, Player*);
	
	private:
		static int round(Player*, Player*, int);
};

#endif // _REFEREE_H
