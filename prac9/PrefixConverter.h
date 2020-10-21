// PrefixConverter.h
// converts from prefix to infix and evaluates prefix expressions
#ifndef _PREFIXCONVERTER_H
#define _PREFIXCONVERTER_H

#include <iostream>
#include <sstream>
#include <string>

#include "Node.h"


class PrefixConverter {

	public:
		PrefixConverter(std::string*);
		~PrefixConverter();
		void setInfix(std::string*);
		std::string getInfix();		
		std::string getPostfix();
		long int getEval();

	private:
		bool isValid(std::string*);
		Node* head;
		

};

#endif // _PREFIXCONVERTER_H
