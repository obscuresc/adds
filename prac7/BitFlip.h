// BitFlip.h

#ifndef BITFLIP_H 
#define BITFLIP_H 

#include "Mutator.h"

class BitFlip : public Mutator {

	public:
		Individual mutate(Individual, int) override;

};

#endif // BitFlip.h
