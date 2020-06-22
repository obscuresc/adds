// Palindrome.h

#ifndef PALINDROME_H
#define PALINDROME_H

#include <cctype>
#include <string>

class Palindrome {

private:
  std::string phrase;

public:
  Palindrome(std::string);
  void removeNonLetters();
  void lowerCase();
  bool isPalindrome();
};

#endif // PALINDROME_H
