// MapSquare.h
#ifndef _MAPSQUARE_H
#define _MAPSQUARE_H

#include "MapGeneric.h"


class MapSquare: public MapGeneric {

	public:
		std::vector<int> map(std::vector<int>) override;

	private:
		int f(int) override;
};

#endif // _MAPSQUARE_H
