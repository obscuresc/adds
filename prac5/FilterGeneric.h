// FilterGeneric.h
#ifndef _FILTERGENERIC_H
#define _FILTERGENERIC_H

class FilterGeneric {

	public:
		std::vector<int> filter(std::vector<int>) = 0;

	private:
		bool g(int) = 0;
};

#endif // _FILTERGENERIC_H
