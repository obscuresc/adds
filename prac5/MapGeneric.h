// MapGeneric.h
#ifndef _MAPGENERIC_H
#define _MAPGENERIC_H

#include <vector>


class MapGeneric {

	public:
		std::vector<int> map(std::vector<int>);

	private:
		void mapHelper(std::vector<int>*, size_t);
		virtual int f(int) = 0;

};

#endif // _MAPGENERIC_H
