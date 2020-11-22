// Player.h
#ifndef _PLAYER_H
#define _PLAYER_H

#include <iostream>
#include <cstring>

#include "types.h"

class Player {

	public:
		virtual int getMove(int) = 0;
		virtual std::string getName() = 0;
};

#endif // _PLAYER_H
