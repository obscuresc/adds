// Human.h

#ifndef HUMAN_H
#define HUMAN_H

#include <cstdlib>
#include <iostream>
#include <sstream>
#include <string>

class human{

	private:

		unsigned int nMoves;
		std::string moveSet;

	public:

		human();
		std::string getMoves();

};


#endif // HUMAN_H include guard
