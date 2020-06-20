#include <cstring>

#ifndef PALINDROME_H
#define PALINDROME_H

class Palindrome{

private:
  std::string phrase;

public:
  Palindrome(std::string);
  void removeNonLetters();
  void lowerCase();
  bool isPalindrome();
};

#endif // PALINDROME_H
