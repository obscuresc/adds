// Mutator.h

#ifndef MUTATOR_H 
#define MUTATOR_H

#include "Individual.h"

class Individual {

	public:
		virtual Individual mutate(Individual, int);

};

#endif // Mutator.h
