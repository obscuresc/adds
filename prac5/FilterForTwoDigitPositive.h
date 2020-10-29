// FilterForTwoDigitPositive.h
#ifndef _FILTERFORTWODIGITPOSITIVE_H
#define _FILTERFORTWODIGITPOSITIVE_H

#include "FilterGeneric.h"

class FilterForTwoDigitPositive: public FilterGeneric {

	private:
		bool g(int) override;
};

#endif // _FILTERFORTWODIGITPOSITIVE_H
