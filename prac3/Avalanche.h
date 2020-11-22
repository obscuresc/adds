// Avalanche.h
#ifndef _AVALANCHE_H_
#define _AVALANCHE_H_ 

#include <cstdlib>
#include <ctime>

#include "Computer.h"
#include "types.h"

class Avalanche : public Computer {

	public:
		std::string getName() override;
};

#endif // _AVALANCHE_H 
