// RandomComputer.h
#ifndef _RANDOMCOMPUTER_H
#define _RANDOMCOMPUTER_H

#include <cstdlib>
#include <ctime>

#include "Computer.h"
#include "types.h"

class RandomComputer: public Computer {

	public:
		RandomComputer();
		std::string getName() override;
};

#endif // _RANDOMCOMPUTER_H
