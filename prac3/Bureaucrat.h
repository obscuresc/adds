// Bureaucrat.h
#ifndef _BUREAUCRAT_H 
#define _BUREAUCRAT_H 

#include <cstdlib>
#include <ctime>

#include "Computer.h"
#include "types.h"

class Bureaucrat : public Computer {

	public:
		Bureaucrat();
		std::string getName() override;

};

#endif // _BUREAUCRAT_H
