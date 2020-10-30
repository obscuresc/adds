// ReduceGeneric.h
#ifndef _REDUCEGENERIC_H
#define _REDUCEGENERIC_H

#include <vector>

class ReduceGeneric {

	public:
		int reduce(std::vector<int>);

	private:
		int reduceHelper(std::vector<int>*, size_t);
		virtual int binaryOperator(int, int) = 0;
};

#endif // _REDUCEGENERIC_H
