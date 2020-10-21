#include <iostream>

#include "PrefixConverter.h"

int main(int argc, char* argv[]) {

	// program guard
	if(argc < 2) {
		std::cout << "Invalid number of arguments." << std::endl;
		return -1;
	}

	#ifdef DEBUG
		for(int i = 0; i < argc; i++)
			std::cout << *(argv + i) << std::endl;
		std::cout << std::endl;
	#endif // DEBUG

	// collapse argv into a single string
	// exclude program name
	std::string cliInput;
	for(int i = 1; i < argc; i++) {

		cliInput.append(std::string(argv[i]));
		cliInput.append(std::string(" "));

	}

	#ifdef DEBUG
		std::cout << "Compiled char to string: ";
		std::cout << cliInput << std::endl;
	#endif // DEBUG

	PrefixConverter pc(&cliInput);

	#ifdef DEBUG
		// run test functions
		std::cout << "getInfix: " << pc.getInfix() << std::endl;
	#endif // DEBUG

	std::cout << pc.getPostfix() << " = " << pc.getEval() << std::endl;

	return 0;
}
