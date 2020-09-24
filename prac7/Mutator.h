// Mutator.h

#ifndef MUTATOR_H 
#define MUTATOR_H

#include "Individual.h"

class Mutator {

	public:
		virtual Individual mutate(Individual);
		virtual Individual mutate(Individual, int); 

};

#endif // Mutator.h
