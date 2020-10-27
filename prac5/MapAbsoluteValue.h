// MapAbsoluteValue.h
#ifndef _MAPABSOLUTEVALUE_H
#define _MAPABSOLUTEVALUE_H

#include <cstdlib>

#include "MapGeneric.h"


class MapAbsoluteValue: public MapGeneric {

	private:
		int f(int) override;
};

#endif // _MAPABSOLUTEVALUE_H
