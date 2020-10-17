// PrefixConvert.cpp
#include "PrefixConverter.h"


PrefixConverter(std::string* input) {

	setInfix(input);
}


void setInfix(std::string*) {

	if(assertValid(input)) infixString = *input; 
	else {

		std::cout << "Invalid infix expression" << std::endl;
		return;

	}
}


std::string getInfix() {

	return infixString;
}


std::string toPostfix() {

	return std::string("not implemented");
}


long int eval() {

	return 0;

}
