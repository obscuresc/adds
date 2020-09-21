// Individual.h

#ifndef INDIVIDUAL_H
#define INDIVIDUAL_H

#include <iostream>
#include <string>
#include <sstream>

#define singleCharacterString 1


class Individual {

	private:
		std::string binaryString;

	public:
		Individual(size_t);
		Individual(std::string);
		std::string getString();
		int getBit(int);
		void flipBit(int);
		int getMaxOnes();
		int getLength();

};

#endif // Individual.h
