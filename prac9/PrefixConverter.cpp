// PrefixConvert.cpp
#include "PrefixConverter.h"


PrefixConverter::PrefixConverter(std::string* input) {

	head = new Node();	
	setInfix(input);

	#ifdef DEBUG
		std::cout << "pc made" << std::endl;
	#endif // DEBUG
}


PrefixConverter::~PrefixConverter() {

	// doubly linked list
	Node * aNode = head;
	Node * aNextNode = aNode->next;

	// iterate through list, deleting on the way
	while(aNextNode->next != nullptr) {
	
		delete aNode;
		aNode = aNextNode;
		aNextNode = aNode->next;

	}

	// delete tail 
	delete aNode;
	
}


void PrefixConverter::setInfix(std::string* input) {
	
	// function guard
	if(!isValid(input)) {
		std::cout << "Invalid input" << std::endl;
		return;
	}

	std::istringstream iss(*input);
	std::string token = {};
	Node * pNode = head;
	while(iss >> token) {

		std::cout << token << std::endl;
		pNode = new	Node(pNode, &token);
	}

	std::cout << *input << std::endl;
}


std::string PrefixConverter::getInfix() {

	std::string infixString;
	Node * aNode = head->next;
	while(aNode->next != nullptr) {

		infixString.append(aNode->data);
		infixString.append(" ");
	}
	
	infixString.pop_back();
	std::cout << "getInfix: " << infixString << std::endl;
	return infixString;
}


std::string PrefixConverter::getPostfix() {

	// function guard
	if(head->next == nullptr) {
		std::cout << "Input string is empty" << std::endl;
		return std::string();
	}

	return std::string("Invalid expression.");
}


long int PrefixConverter::getEval() {

	return 0;

}


bool PrefixConverter::isValid(std::string* input) {

	#ifdef DEBUG
		std::cout << "isValid" << std::endl;
	#endif // DEBUG

	// tokenise and check each token
	std::istringstream iss(*input);
	std::string token = {};
	bool isValidInteger = false;
	bool isValidOperator = false;
	while(iss >> token) {

		#ifdef DEBUG
			std::cout << "token: " << "\"" << token << "\"" << std::endl;
		#endif // DEBUG

		// return false if not an integer
		try {
			std::stoi(token);
			isValidInteger = true;
		}
		catch (...) {

			#ifdef DEBUG
				std::cout << "Caught non-integer value" << std::endl;
			#endif // DEBUG

			isValidInteger = false;
		}

		// return false if not an operator
		isValidOperator = (token.compare(std::string("+")) == (size_t) 0 ||
			token.compare(std::string("-")) == (size_t) 0 || 
			token.compare(std::string("*")) == (size_t) 0 || 
			token.compare(std::string("/")) == (size_t) 0);

		#ifdef DEBUG
			std::cout << "eq+: " << (token.compare(std::string("+")) == size_t(0)) << std::endl;
			std::cout << "eq-: " << (token.compare(std::string("-")) == size_t(0)) << std::endl;
			std::cout << "eq*: " << (token.compare(std::string("*")) == size_t(0)) << std::endl;
			std::cout << "eq/: " << (token.compare(std::string("/")) == size_t(0)) << std::endl;
		#endif // DEBUG

	
		std::cout << "validInteger: " << isValidInteger;
		std::cout << " validOperator: " << isValidOperator;
		std::cout << std::endl;	
		if(!isValidInteger && !isValidOperator) {
			
			#ifdef DEBUG
				std::cout << "Validity test failed" << std::endl;
			#endif // DEBUG

			return false;
		}

	}

	#ifdef DEBUG
		std::cout << "Validity passed." << std::endl;
	#endif // DEBUG
	return true;
}
