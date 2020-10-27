// FilterGeneric.h
#ifndef _FILTERGENERIC_H
#define _FILTERGENERIC_H

class FilterGeneric {

	public:
		std::vector<int> filter(std::vector<int>);

	private:
		void filterHelper(std::vector<int>*, size_t);
		bool g(int) = 0;
};

#endif // _FILTERGENERIC_H
