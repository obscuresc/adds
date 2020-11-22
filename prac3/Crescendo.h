// Crescendo.h
#ifndef _CRESCENDO_H 
#define _CRESCENDO_H 

#include <cstdlib>
#include <ctime>

#include "Computer.h"
#include "types.h"

class Crescendo : public Computer {

	public:
		Crescendo();
		std::string getName() override;

};

#endif // _CRESCENDO_H 
