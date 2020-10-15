#include "Sort.h"

void Sort::printList(std::vector<int>* list) {

	for(size_t i = 0; i < list->size(); i++)
		std::cout << list->at(i) << ", ";
	std::cout << "\b\b" << std::endl;

}
