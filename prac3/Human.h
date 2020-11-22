// Human.h
#ifndef _HUMAN_H
#define _HUMAN_H

#include "Player.h"

class Human : public Player {

	public:
		int getMove();
		std::string getName() override;
};

#endif // _HUMAN_H
