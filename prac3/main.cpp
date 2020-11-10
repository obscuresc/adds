#include <iostream>

#include "Player.h"
#include "Human.h"
#include "Computer.h"

int main(int argc, char* argv[]) {

	// function guard
	const int correctNumArgs = 9;
	if(argc != correctNumArgs) {
		
		std::cout << "Incorrect number of arguments" << std::endl;
		return -1;
	}

	std::cout << argv[0] << std::endl;

	return 0;
}
