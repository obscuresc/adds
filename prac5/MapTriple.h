// MapTriple.h
#ifndef _MAPTRIPLE_H
#define _MAPTRIPLE_H

#include "MapGeneric.h"


class MapTriple: public MapGeneric {

	public:
		std::vector<int> map(std::vector<int>) override; 

	private:
		int f(int) override;

};

#endif // _MAPTRIPLE_H
