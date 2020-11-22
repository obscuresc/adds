#include <cstring>
#include <iostream>
#include <vector>

#include "Player.h"
#include "Human.h"
#include "Computer.h"
#include "RandomComputer.h"
#include "Avalanche.h"
#include "Bureaucrat.h"
#include "Crescendo.h"
#include "PaperDoll.h"
#include "FistfullODollars.h"
#include "Toolbox.h"
#include "Tournament.h"
#include "Referee.h"


int main(int argc, char* argv[]) {

	// function guard
	const int correctNumArgs = 9;
	if(argc != correctNumArgs) {
		
		std::cout << "Incorrect number of arguments" << std::endl;
		return -1;
	}

	Player* pPlayer;
	for(int i = 1; i < argc; i++) {

		if(strcmp(argv[i], "Avalanche") == 0) {

			pPlayer = new Avalanche();
			Tournament::enterPlayer(pPlayer);
		}

		else if(strcmp(argv[i], "Bureaucrat") == 0) {

			pPlayer = new Bureaucrat();
			Tournament::enterPlayer(pPlayer);

		}

		else if(strcmp(argv[i], "Computer") == 0) {

			pPlayer = new Computer();
			Tournament::enterPlayer(pPlayer);

		}

		else if(strcmp(argv[i], "Crescendo") == 0) {

			pPlayer = new Crescendo();
			Tournament::enterPlayer(pPlayer);

		}

		else if(strcmp(argv[i], "FistfullODollars") == 0) {

			pPlayer = new FistfullODollars();
			Tournament::enterPlayer(pPlayer);

		}

		else if(strcmp(argv[i], "PaperDoll") == 0) {

			pPlayer = new PaperDoll();
			Tournament::enterPlayer(pPlayer);

		}

		else if(strcmp(argv[i], "RandomComputer") == 0) {

			pPlayer = new RandomComputer();
			Tournament::enterPlayer(pPlayer);

		}

		else if(strcmp(argv[i], "Toolbox") == 0) {

			pPlayer = new Toolbox();
			Tournament::enterPlayer(pPlayer);

		}

		else {

			std::cout << "Invalid player name given at argument: " << i;
			std::cout << std::endl;
			return -1;
		}

	}

	Tournament::compete();
	Player* winner = Tournament::getWinner();
	std::cout << "Winner name: " << winner->getName() << std::endl;
	return 0;

}
