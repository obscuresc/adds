// MapGeneric.h
#ifndef _MAPGENERIC_H
#define _MAPGENERIC_H

#include <vector>


class MapGeneric {

	public:
		std::vector<int> map(std::vector<int>) = 0;

	private:
		int f(int) = 0;

};

#endif // _MAPGENERIC_H
