#include <cstring>
#include <iostream>
#include <vector>

#include "Player.h"
#include "Human.h"
#include "Computer.h"
#include "RandomComputer.h"
#include "Avalanche.h"
#include "Bureaucrat.h"
#include "Tournament.h"

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

		else {

			std::cout << "Invalid player given" << std::endl;
			return -1;
		}

	}

	Tournament::compete();
	Player* pWinner = Tournament::getWinner();
	std::cout << "Winner name" << std::endl;

	return 0;

}
