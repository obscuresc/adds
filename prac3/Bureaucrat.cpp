// Bureaucrat.cpp
#include "Bureaucrat.h"

Bureaucrat::Bureaucrat() {

	moves[0] = paper;
	moves[1] = paper;
	moves[2] = paper;

}


std::string Bureaucrat::getName() {

	return std::string("Bureaucrat");

}
