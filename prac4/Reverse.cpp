/* Reverse class

Provides functions to reverse string and numeric values using recursion

*/

#include "Reverse.h"

int Reverse::reverseDigit(int digit) {
	
	// don't accept negative values	
	if(digit < 0) return -1;

	// if single digit, return digit
	if(digit < doubleDigit) return digit;

	// get first digit
	int firstDigit = digit;
	size_t i = 1;
	for(i = 0; firstDigit > 10; i++) firstDigit /= 10;
	
	// remove first digit from the main integer
	digit = digit % (int)pow(10, i);	

	// recursive call 
	// multiply return by 10 and add first digit
	return 10 * reverseDigit(digit) + firstDigit;
	
}


std::string Reverse::reverseString(std::string input) {

	// don't accept null string
	if(input.empty()) return input;
	
	// return if single character is left
	if(input.size() == singleCharacter) return input;

	// otherwise get first character, recursive call, push to back
	std::string firstCharacter = input.substr(0, 1);
	input.erase(0, 1);
	return (reverseString(input) + firstCharacter);

}
