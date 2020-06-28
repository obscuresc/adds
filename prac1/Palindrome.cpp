/* Palindrome class

Supports string operations to determine if a phrase is a palindrome.

  20/06/2020 Jack Arney
*/

#include "Palindrome.h"

#define NOT_ALPHA 0

// constructor only requires the phrase to be used for palindrome functions
Palindrome::Palindrome(std::string sInput) {

  phrase = sInput;

}

// removes all non-alpha letters from the phrase
void Palindrome::removeNonLetters() {

  for (size_t i = 0; i < phrase.length(); i++) {

    // erase
    phrase.at(i);

  }

}

// converts all alpha characters in phrase to lower case
void Palindrome::lowerCase() {

  for (size_t i = 0; i < phrase.length(); i++) {

    if (isalpha(phrase.at(i))) {

      phrase.replace(i, (size_t) 1, (const char *) (long) tolower(phrase.at(i)));

    }

  }

}

// evaluates whether the phrase is a palindrome
bool Palindrome::isPalindrome() {

	for (size_t i = 0; i < phrase.length()/2; i++) {

    	// iterate until middle, compare start against end minus start positions
		if (phrase.at(i) != phrase.at(phrase.length() - i)) {

			return false;
	
		}

	}

  	return true;

}
