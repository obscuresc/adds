#include <string>
#include <iostream>

// program should never take any arguments
#define correctNArgs 1

int main(int argc, char * argv[]) {

	if (argc != correctNArgs) {

		std::cout << "Incorrect number of arguments" << std::endl;
		return -1;

	}

	
	return 0;
}
