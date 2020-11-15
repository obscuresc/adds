// Referee.cpp
#include "Referee.h"


Player* Referee::match(Player* player1, Player* player2) {

	int player1winCount = 0;
	int player2winCount = 0;

	// each match is five rounds
	const int numberOfRounds = 5;
	int matchWinBias = 0;
	for(size_t round = 0; round < numberOfRounds; round++) {

		matchWinBias += round(player1, player2, round);

	}

	matchWinBias >= 0 ? return player1 : return player2;
}

int Referee::round(Player* player1, Player* player2, round) {

	if(player1->getMove(round)

}
