// Mutator.h

#ifndef BITFLIPPROB_H 
#define BITFLIPPROB_H 

#include "Mutator.h"

#include <cstdlib>

class BitFlipProb : public Mutator {

	public:
		BitFlipProb(double);
		Individual mutate(Individual);

};

#endif // BitFlipProb.h
