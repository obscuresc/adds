// QuickSort.cpp
#include "QuickSort.h"

void QuickSort::sort(std::vector<int>* list) {

	// function guard
	if(list->size() < 2) return;

	// recursive helper
	sortHelper(list, 0, list->size());

}

void QuickSort::sortHelper(std::vector<int>* list, size_t lowerIndex, size_t upperIndex) {

	// base case
	if(upperIndex - lowerIndex == 1) return;

	// recursive case
	else {
		
		size_t pivotIndex = lowerIndex + 2;
		int pivotValue = list->at(pivotIndex);
		for(size_t i = lowerIndex; i != upperIndex; i++) {
		
			if(list.at(lowerIndex) < pivotValue) {

			}
		}
	}
}
