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
	else {

		// don't like this method, but having trouble with
		// the index management version
		size_t pivotIndex = lowerIndex + 2;
		std::cout << "pivotIndex: " << pivotIndex << std::endl;
		std::cout << "lowerIndex: " << lowerIndex << std::endl;
		std::cout << "upperIndex: " << upperIndex << std::endl;
		std::vector<int> lower(upperIndex - lowerIndex + 1);
		std::vector<int> upper(upperIndex - lowerIndex + 1);
	
		std::vector<int>::iterator lowerIt;
		std::vector<int>::iterator upperIt;
		lowerIt = lower.begin();
		upperIt = upper.begin();
		for(size_t i = lowerIndex; i < upperIndex; i++) {

			std::cout << "loop: " << i << std::endl;
			if(i != pivotIndex) {

				if(list->at(i) <= list->at(pivotIndex)) {
					lower.insert(lowerIt, list->at(i));
				}
				else {
					upper.insert(upperIt, list->at(i));
				}
			}
		}	
		
		std::cout << "postLoop" << std::endl;
		lower.insert(lowerCount, list->at(pivotIndex));
		std::vector<int>::iterator i;
//		for(i = lower.begin(); i != lower.end(); i++)
//			list->at(i + lowerIndex) = lower.at(i);
//		for(i = upper.begin(); i != upper.end(); i++)
//			list->at(i + upperIndex) = upper.at(i);
	}
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
	
