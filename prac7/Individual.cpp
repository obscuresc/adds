// Individual.cpp

#include "Individual.h"


// load binaryString with given string
Individual::Individual(std::string input) {

	binaryString = input;

}


// fill binaryString with character repeated n times
Individual::Individual(size_t n) {

	char defaultBinaryFiller = '0';
	binaryString = std::string(n, defaultBinaryFiller);

}


// get value of internal member, binaryString
std::string Individual::getString() {

	return binaryString;

}


// get value of position within binaryString
int Individual::getBit(int pos) {

	// function guard
	if(pos > binaryString.size()) return -1;

	return std::stoi(binaryString.substr(pos, singleCharacterString));

}


// flip bit at position with binaryString
void Individual::flipBit(int pos) {

	// function guard
	if(pos > binaryString.size()) return;

	if(binaryString.at(pos) == '0') {

		binaryString.replace(pos, singleCharacterString, "1");
	}	
	else {

		binaryString.replace(pos, singleCharacterString, "0");

	}
	
}


// get size of the binaryString
int Individual::getLength() {

	return (int) binaryString.size();

}


// find the lenth of the longest consecutive sequence of 1s
int Individual::getMaxOnes() {

	// use strtok to segment on basis of 1s
	// set best guess = 0
	// if current token longer than best guess, set best guess = size of current token
	std::istringstream iss(binaryString);
	std::string groupOfOnes;
	int bestGuess = 0;
	while(std::getline(iss, groupOfOnes, '0')) {

		if(bestGuess < groupOfOnes.size()) bestGuess = (int) groupOfOnes.size();		
	}

	// bestGuess is now correct after completing search
	return bestGuess;

}
