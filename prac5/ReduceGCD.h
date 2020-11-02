// ReduceGeneric.h
#ifndef _REDUCEGCD_H 
#define _REDUCEGCD_H 

#include "ReduceGeneric.h"

class ReduceGCD: public ReduceGeneric {

	private:
		int reduceHelper(std::vector<int>*, size_t) override;
		int binaryOperator(int, int) override;

};

#endif // _REDUCEGCD_H 
