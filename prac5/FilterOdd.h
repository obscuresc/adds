// FilterOdd.h
#ifndef _FILTERODD_H
#define _FILTERODD_H

#include "FilterGeneric.h"

class FilterOdd: public FilterGeneric {

	private:
		bool g(int) override;

};

#endif // _FILTERODD_H
