// BitFlip.h

#ifndef BITFLIP_H 
#define BITFLIP_H 

#include "Mutator.h"

class BitFlip: public Mutator {

	public:
		virtual Individual mutate(Individual);
		Individual mutate(Individual, int) override;

};

#endif // BitFlip.h
