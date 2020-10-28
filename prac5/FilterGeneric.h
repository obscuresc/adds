// FilterGeneric.h
#ifndef _FILTERGENERIC_H
#define _FILTERGENERIC_H

#include <vector>

class FilterGeneric {

	public:
		std::vector<int> filter(std::vector<int>);

	private:
		void filterHelper(std::vector<int>*, size_t);
		virtual bool g(int) = 0;
};

#endif // _FILTERGENERIC_H
