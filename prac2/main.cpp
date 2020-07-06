#include <string>
#include <iostream>

#include "computer.h"
#include "human.h"

// program should never take any arguments
#define correctNArgs 1

int main(int argc, char * argv[]) {

	if (argc != correctNArgs) {

		std::cout << "Incorrect number of arguments" << std::endl;
		return -1;

	}

	human HumanPlayer();
	
	return 0;
}
