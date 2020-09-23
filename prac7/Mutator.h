// Mutator.h

#ifndef MUTATOR_H 
#define MUTATOR_H

#include "Individual.h"

class Mutator {

	public:
		virtual Individual mutate(Individual) = 0; 
	//	virtual Individual mutate(Individual, int) = 0; 

};

#endif // Mutator.h
