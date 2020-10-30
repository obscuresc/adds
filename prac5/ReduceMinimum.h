// ReduceMinimum.h
#ifndef _REDUCEMINIMUM_H
#define _REDUCEMINIMUM_H

#include "ReduceGeneric.h"

class ReduceMinimum: public ReduceGeneric {

	private:
		int binaryOperator(int, int) override;

};

#endif // _REDUCEMINIMUM_H
