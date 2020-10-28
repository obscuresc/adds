#include <iostream>


int main(int argc, char* argv[]) {

	for(size_t i = 0; i < (size_t) argc; i++)
		std::cout << argv[i] << std::endl;
	std::cout << "Main.cpp" << std::endl;

	return 0;
}
