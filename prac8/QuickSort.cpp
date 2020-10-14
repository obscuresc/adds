// QuickSort.cpp
#include "QuickSort.h"

void QuickSort::sort(std::vector<int>* list) {

	// function guard
	if(list->size() < 2) return;

	// recursive helper
	sortHelper(list, 0, list->size() - 1);

}

void QuickSort::sortHelper(std::vector<int>* list, size_t lowerIndex, size_t upperIndex) {

	// base cases
	if(upperIndex - lowerIndex < 2) return;

	// recursive case
	// don't like this method, but having trouble with
	// the index management version
	size_t pivotIndex = lowerIndex + 2;
	std::cout << "pivotIndex: " << pivotIndex << std::endl;
	std::cout << "lowerIndex: " << lowerIndex << std::endl;
	std::cout << "upperIndex: " << upperIndex << std::endl;
	std::vector<int> lower;
	std::vector<int> upper;
	
	for(size_t i = lowerIndex; i <=  upperIndex; i++) {

		if(i != pivotIndex) {

			if(list->at(i) <= list->at(pivotIndex)) {
				lower.push_back(list->at(i));
			}
			else {
				upper.push_back(list->at(i));
			}
		}
	}	
	

	lower.push_back(list->at(pivotIndex));

	std::cout << "before inserting sublists" << std::endl;	
	for(size_t i = 0; i < list->size(); i++)
		std::cout << "list at(" << i << ") = " << list->at(i) << std::endl;
	for(size_t i = 0; i < lower.size(); i++)
		list->at(lowerIndex + i) = lower.at(i);

	std::cout << "after inserting lower list" << std::endl;	
	for(size_t i = 0; i < list->size(); i++)
		std::cout << "list at(" << i << ") = " << list->at(i) << std::endl;

	for(size_t i = 0; i < upper.size(); i++)
		list->at(lowerIndex + lower.size() + i) = upper.at(i);

	std::cout << "after inserting upper list" << std::endl;	
	for(size_t i = 0; i < list->size(); i++)
		std::cout << "list at(" << i << ") = " << list->at(i) << std::endl;

	std::cout << "\n\n\n\n\n" << std::endl;
	sortHelper(list, 0, pivotIndex - 1);
	sortHelper(list, pivotIndex + 1, upperIndex); 

}


void QuickSort::swap(std::vector<int>* list, size_t index1, size_t index2) {

	// function guard
	if(index1 >= list->size()) return;
	if(index2 >= list->size()) return;
	if(index1 == index2) return;

	// swap
	int swapBuffer = list->at(index1);
	list->at(index1) = list->at(index2);
	list->at(index2) = swapBuffer;

}
	
