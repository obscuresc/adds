#include <cstring>
#include <cassert>

#include <Palindrome.h>

#define iCorrectNArgs 2 // main function should only take two arguments

int main(int argc, char const *argv[]) {

  // exist with error if incorrect number of arguments are given
  argc != iCorrectNArgs ? return 1: {};

  // create a palindrome object to examine properties
  Palindrome palindrome(argv[2]);

  return 0;
}
