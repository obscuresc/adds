// PrefixConvert.cpp
#include "PrefixConverter.h"


PrefixConverter::PrefixConverter(std::string* input) {

	setInfix(input);
	head = new Node();	
}


~PrefixConverter::PrefixConverter() {

	// doubly linked list
	// find tail
	// move to prev, delete next
	// repeat until head where prev == nullptr
	delete head;
	
}


void PrefixConverter::setInfix(std::string* input) {
	
	// function guard
	if(!isValid()) {
		std::cout << "Invalid input" << std::endl;
		return;
	}

	infixString = *input;
	std::cout << *input << std::endl;
}


std::string PrefixConverter::getInfix() {

	return infixString;
}


std::string PrefixConverter::getPostfix() {

	// function guard
	if(infixString.empty()) {
		std::cout << "Input string is empty" << std::endl;
		return std::string();
	}

	return std::string("Invalid expression.");
}


long int PrefixConverter::getEval() {

	return 0;

}


bool PrefixConverter::isValid() {

	// tokenise and check each token
	std::istringstream iss(infixString);
	std::string token = {};
	bool isValidInteger = false;
	bool isValidOperator = false;

	while(iss >> token) {

		// return false if not an integer
		try {
			std::stoi(token);
		}
		catch (int) { isValidInteger = false; }

		// return false if not an operator
		isValidOperator = (token == std::string("+") ||
			token == std::string("-") || 
			token == std::string("*") || 
			token == std::string("/"));
		
		if(!isValidInteger || !isValidOperator) return false;

	}

	return true;
}
