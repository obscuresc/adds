/* Reverse class

Provides functions to reverse string and numeric values using recursion

*/

#include "human.h"


int Reverse::reverseDigit(int digit) {
	
	// don't accept negative values	
	if(digit < 0) return -1;

	// get first digit
	size_t i = 1;
	for(i; (digit % (10*i)); i++) {}
	i--;
	int firstDigit = digit % (10*i);
	
	// recursive call 
	// multiply return by 10 and add first digit
	return 10*reverseDigit((digit-firstDigit) % 10) + firstDigit;
	
}
std::string reverseString();
