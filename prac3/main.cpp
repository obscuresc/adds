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

// print function for returning class name
inline std::string className(const std::string& prettyFunction)
{
    size_t colons = prettyFunction.find("::");
    if (colons == std::string::npos)
        return "::";
    size_t begin = prettyFunction.substr(0,colons).rfind(" ") + 1;
    size_t end = colons - begin;

    return prettyFunction.substr(begin,end);
}

#define __CLASS_NAME__ className(__PRETTY_FUNCTION__)


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

			std::cout << "Invalid player name given at argument: " << i;
			std::cout << std::endl;
			return -1;
		}

	}

	Tournament::compete();
	std::cout << "Winner name: " << argv[Tournament::getWinner()] << std::endl;
	return 0;

}
