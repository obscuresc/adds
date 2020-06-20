/* Palindrome class

Supports string operations to determine if a phrase is a palindrome.

  20/06/2020 Jack Arney
*/

#include <Palindrome.h>

// constructor only requires the phrase to be used for palindrome functions
Palindrome::Palindrome(std::string sInput) {
  this.phrase = sInput;
}

// removes all non-alpha letters from the phrase
void Palindrome::removeNonLetters() {

  for (size_t i = 0; i < this.phrase.length; i++) {

    this.phrase.at(0)

  }

}

void Palindrome::lowerCase();
bool Palindrome::isPalindrome();
