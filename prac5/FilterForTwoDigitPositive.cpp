// FilterForTwoDigitPositive.cpp
#include "FilterForTwoDigitPositive.h"

bool FilterForTwoDigitPositive::g(int input) {

	const int twoDigitPositiveMin = 10;
	const int twoDigitPositiveMax = 99;
	return (input < twoDigitPositiveMin) || (input > twoDigitPositiveMax);
}
