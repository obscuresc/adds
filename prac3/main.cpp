#include <cstring>
#include <iostream>
#include <vector>

#include "Player.h"
#include "Human.h"
#include "Computer.h"
#include "RandomComputer.h"
#include "Avalanche.h"
#include "Bureaucrat.h"

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
			tournament.enterPlayer(pPlayer);
		}

		else if(strcmp(argv[i], "Bureaucrat") == 0) {

			pPlayer = new Bureaucrat();
			tournament.enterPlayer(pPlayer);

		}

		else if(strcmp(argv[i], "Computer") == 0) {

			pPlayer = new Computer();
			tournament.enterPlayer(pPlayer);

		}

		else {

			std::cout << "Invalid player given" << std::endl;
			return -1;
		}

	}

	std::cout << argv[0] << std::endl;

	return 0;
}
