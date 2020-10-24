// PrefixConverter.h
// converts from prefix to infix and evaluates prefix expressions
#ifndef _PREFIXCONVERTER_H
#define _PREFIXCONVERTER_H

#include <iostream>
#include <sstream>
#include <string>
#include <vector>

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
		bool isOperator(std::string*);
		Node* head;
		

};

#endif // _PREFIXCONVERTER_H
