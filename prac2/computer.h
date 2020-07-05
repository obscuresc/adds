// Computer.h

#ifndef COMPUTER_H 
#define COMPUTER_H 

#include <cstdlib>
#include <iostream>
#include <string>

class computer{

	private:

		std::string moveSet;

	public:

		computer(unsigned int);
		std::string getMoves();

};


#endif // COMPUTER_H include guard
