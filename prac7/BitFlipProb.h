// Mutator.h

#ifndef BITFLIPPROB_H 
#define BITFLIPPROB_H 

#include "Mutator.h"

#include <cstdlib>
#include <ctime>


class BitFlipProb: public Mutator {

	private:
		double p;

	public:
		BitFlipProb(double);
		Individual mutate(Individual) override;

};

#endif // BitFlipProb.h
