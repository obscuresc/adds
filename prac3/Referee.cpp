// Referee.cpp
#include "Referee.h"


Player* Referee::match(Player* player1, Player* player2) {

	// each match is five rounds
	const int numberOfRounds = 5;
	int matchWinBias = 0;
	for(size_t roundNum = 0; roundNum < numberOfRounds; roundNum++) {

		matchWinBias += round(player1, player2, roundNum);

	}

	if(matchWinBias >= 0) {

		return player1;
	}

	return player2;
}

int Referee::round(Player* player1, Player* player2, int roundNum) {

	const int player1win = 1;
	const int player2win = -1;

	if(player1->getMove(roundNum) == rock && player2->getMove(roundNum) == paper)
		return player2win;

	if(player1->getMove(roundNum) == paper && player2->getMove(roundNum) == scissors)
		return player2win;

	if(player1->getMove(roundNum) == scissors && player2->getMove(roundNum) == rock)
		return player2win;

	return player1win;

}
