// Player.h
#ifndef _PLAYER_H
#define _PLAYER_H

#include <iostream>

#include "types.h"

class Player {

	public:
		virtual int getMove(int) = 0;
};

#endif // _PLAYER_H
