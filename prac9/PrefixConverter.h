// PrefixConverter.h
// converts from prefix to infix and evaluates prefix expressions
#ifndef _PREFIXCONVERTER_H
#define _PREFIXCONVERTER_H

#include <iostream>
#include <sstream>
#include <string>

class PrefixConverter {

	public:
		PrefixConverter(std::string*);
		void setInfix(std::string*);
		std::string getInfix();		
		std::string toPostfix();
		long int eval();

	private:
		bool isValid();
		std::string infixString;

};

#endif // _PREFIXCONVERTER_H
