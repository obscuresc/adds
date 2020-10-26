// PrefixConvert.cpp
#include "PrefixConverter.h"


PrefixConverter::PrefixConverter(std::string* input) {

	#ifdef DEBUG
		std::cout << "PrefixConverter constructor" << std::endl;
	#endif // DEBUG

	head = new Node();	
	setInfix(input);
}


PrefixConverter::~PrefixConverter() {

	#ifdef DEBUG
		std::cout << "PrefixConverter destructor" << std::endl;
	#endif // DEBUG

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
	
	#ifdef DEBUG
		std::cout << "setInfix function" << std::endl;
	#endif // DEBUG

	// function guard
	if(!isValid(input)) {
		std::cout << "Invalid input" << std::endl;
		return;
	}

	std::istringstream iss(*input);
	std::string token = {};
	Node * pNode = head;
	while(iss >> token) {

		pNode = new	Node(pNode, &token);
	}

}


std::string PrefixConverter::getInfix() {

	#ifdef DEBUG
		std::cout << "getInfix function" << std::endl;
	#endif // DEBUG

	std::string infixString;
	Node * aNode = head->next;
	while(aNode->next != nullptr) {

		infixString.append(aNode->data);
		infixString.append(" ");
		aNode = aNode->next;
	}

	infixString.append(aNode->data);	

	#ifdef DEBUG
		std::cout << "getInfix result: " << infixString << std::endl;
	#endif // DEBUG
	return infixString;
}


std::string PrefixConverter::getPostfix() {

	#ifdef DEBUG
		std::cout << "getPostFix function" << std::endl;
	#endif // DEBUG

	// function guard
	if(head->next == nullptr) {
		std::cout << "Input string is empty" << std::endl;
		return std::string();
	}

	// recreate stack-like behavior with std::vector
	Node * aNode = head;
	std::vector<std::string> expressionStack;
	while(aNode->next != nullptr) {

		aNode = aNode->next;

		#ifdef DEBUG
			std::cout << "Inserting data: " << aNode->data << std::endl;
		#endif // DEBUG

		expressionStack.push_back(aNode->data);				

		// make sure stack is greater than three items
		if(expressionStack.size() > 2) {

			// if two non-operators are added after operator
			size_t lastIndex = expressionStack.end() - expressionStack.begin() - 1;
			size_t secondLastIndex = lastIndex - 1;
			size_t thirdLastIndex = secondLastIndex - 1;
			if(!isOperator(&expressionStack.at(lastIndex)) 
				&& !isOperator(&expressionStack.at(secondLastIndex))
				&& isOperator(&expressionStack.at(thirdLastIndex))) {

				#ifdef DEBUG
					std::cout << "Expression resolve" << std::endl;
				#endif // DEBUG

				// resolve into expression
				expressionStack.at(thirdLastIndex) = std::string("(" +
					   	expressionStack.at(secondLastIndex) + " " +
						expressionStack.at(thirdLastIndex) + " " +
						expressionStack.at(lastIndex) + ")");

				expressionStack.pop_back();
				expressionStack.pop_back();
			}	
		}
	}

	// at the end of the loop
	// expression should only have one Node
	// operator should have none
	// if not, I can return and say it was invalid
	#ifdef DEBUG
		for(size_t i = 0; i < expressionStack.size(); i++)
			std::cout << expressionStack.at(i) << std::endl;
	#endif // DEBUG

	if(expressionStack.size() == 1) return expressionStack.at(0);
	else return std::string("Error");
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

		#ifdef DEBUG	
			std::cout << "validInteger: " << isValidInteger;
			std::cout << " validOperator: " << isValidOperator;
			std::cout << std::endl;
		#endif // DEBUG

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


bool PrefixConverter::isOperator(std::string* input) {

	return (input->compare(std::string("+")) == (size_t) 0 ||
			input->compare(std::string("-")) == (size_t) 0 || 
			input->compare(std::string("*")) == (size_t) 0 || 
			input->compare(std::string("/")) == (size_t) 0);

}
