#include <iostream>

#include "PrefixConverter.h"

int main(int argc, char* argv[]) {

	// program guard
	if(argc < 2) {
		std::cout << "Invalid number of arguments." << std::endl;
		return -1;
	}
	
	// collapse argv into a single string
	// exclude program name
	std::string cliInput;
	for(int i = 1; i < argc; i++) {

		cliInput.append(std::string(argv[i]));

	}	

	PrefixConverter pc(&cliInput);
	std::cout << pc.getPostfix() << " = " << pc.getEval() << std::endl;

	return 0;
}
