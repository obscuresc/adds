#include <cstring>
#include <cassert>
#include <iostream>

#include "Palindrome.h"

#define iCorrectNArgs 2 // main function should only take two arguments

int main(int argc, char *argv[]) {

	// exist with error if incorrect number of arguments are given
	if (argc != iCorrectNArgs) return -1;

	// create a palindrome object to examine properties
	std::string argString = (std::string) argv[1];
	Palindrome palindrome(argString);

	// run palindrome methods
	palindrome.removeNonLetters();
	std::cout << palindrome.phrase << std::endl;
	palindrome.lowerCase();
	std::cout << palindrome.phrase << std::endl;
	
	palindrome.isPalindrome() ? std::cout << "Yes" << std::endl : std::cout << "No" << std::endl;

  return 0;
}
