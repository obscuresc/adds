// Rearrange.h

#ifndef REARRANGE_H
#define REARRANGE_H 

#include "Individual.h"
#include "Mutator.h"

class Rearrange: public Mutator {

	public:
		Individual mutate(Individual, int) override;

};

#endif // Rearrange.h
