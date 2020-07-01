/* Palindrome class

Supports string operations to determine if a phrase is a palindrome.

  20/06/2020 Jack Arney
*/

#include "Palindrome.h"

// constructor only requires the phrase to be used for palindrome functions
Palindrome::Palindrome(std::string sInput) {

  phrase = sInput;

}

// removes all non-alpha letters from the phrase
void Palindrome::removeNonLetters() {

  for (size_t i = 0; i < phrase.length(); i++) {

	// erase if not alpha
	if (not isalpha(phrase.at(i))) {

		phrase.erase(i, 1);	
	
		// account for moved string
		i--;	

	}

  }

}

// converts all alpha characters in phrase to lower case
void Palindrome::lowerCase() {

	for (size_t i = 0; i < phrase.length(); i++) {

		if ((bool) isalpha(phrase.at(i))) {

			phrase.replace(i, 1, 1, tolower(phrase.at(i))); 

		}

	}

}

// evaluates whether the phrase is a palindrome
bool Palindrome::isPalindrome() {

    // iterate until middle, compare start against end minus start positions
	for (size_t i = 0; i < phrase.length()/2; i++) {

		// account for zero indexed string access
		if (phrase.at(i) != phrase.at(phrase.length() - 1 - i)) {

			return false;
	
		}

	}

  	return true;

}
