// Computer.h
#ifndef _COMPUTER_H
#define _COMPUTER_H

#include "Player.h"
#include "types.h"

class Computer: public Player {

	public:
		Computer();
		int getMove(int) override;

	protected:
		int moves[3];
};

#endif // _COMPUTER_H
