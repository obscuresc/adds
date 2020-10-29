// FilterNonPositive.h
#ifndef _FILTERNONPOSITIVE_H
#define _FILTERNONPOSITIVE_H

#include "FilterGeneric.h"


class FilterNonPositive: public FilterGeneric {

	private:
		bool g(int) override;

};

#endif // _FILTERNONPOSITIVE_H
