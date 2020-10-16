// QuickSort.cpp
#include "QuickSort.h"

void QuickSort::sort(std::vector<int>* list) {

	// function guard
	if(list->size() < 2) return;

	// recursive helper
	sortHelper(list, 0, list->size() - 1);

}

void QuickSort::sortHelper(std::vector<int>* list, size_t lowerIndex, size_t upperIndex) {

	// function guard
	if(lowerIndex >= upperIndex || upperIndex > list->size()) return;

	size_t pivotIndex = partition(list, lowerIndex, upperIndex);
	sortHelper(list, lowerIndex, pivotIndex - 1);
	sortHelper(list, pivotIndex + 1, upperIndex); 
	
}

size_t QuickSort::partition(std::vector<int>* list, size_t lowerIndex, size_t upperIndex) {

	// per spec, pivot index should be index 2 of the sublist
	// unless list is too small
	// this way accounts for list size >= 3 and for any < 3
	size_t pivotIndex = lowerIndex + 2;
	if(upperIndex - lowerIndex < 2)	pivotIndex = lowerIndex;

	// find new location of the pivot
	size_t newPivotIndex = lowerIndex;
	for(size_t i = lowerIndex; i <= upperIndex; i++) {

		if(list->at(i) <= list->at(pivotIndex))
		   if(i != pivotIndex) newPivotIndex++;

	}
	
	// swap pivotValue into new pivot location
	swap(list, pivotIndex, newPivotIndex);

	// partition using new pivot location
	size_t m = lowerIndex;
	size_t upperPartitionIndex = newPivotIndex + 1;
	while(m != newPivotIndex) {

		if(list->at(m) > list->at(newPivotIndex)) {

			swap(list, m, upperPartitionIndex);
			upperPartitionIndex++;
			
		}

		else m++;
	}

	return newPivotIndex;
	
}

void QuickSort::swap(std::vector<int>* list, size_t index1, size_t index2) {

	// function guard
	if(index1 >= list->size() || index2 >= list->size()) return;

	int buffer = list->at(index1);
	list->at(index1) = list->at(index2);
	list->at(index2) = buffer;

}
