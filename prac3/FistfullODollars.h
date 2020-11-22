// FistfullODollars.h
#ifndef _FISTFULLODOLLARS_H 
#define _FISTFULLODOLLARS_H 

#include <cstdlib>
#include <ctime>

#include "Computer.h"
#include "types.h"

class FistfullODollars : public Computer {

	public:
		FistfullODollars();
		std::string getName() override;
};

#endif // _FISTFULLODOLLARS_H 
