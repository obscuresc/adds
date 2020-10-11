// QuickSort.cpp
#include "QuickSort.h"

void QuickSort::sort(std::vector<int>* list) {

	// function guard
	if(list->size() < 2) return;

	// recursive helper
	sortHelper(list, 0, list->size() -1);

}

void QuickSort::sortHelper(std::vector<int>* list, size_t lowerIndex, size_t upperIndex) {

	// base cases
	if(upperIndex - lowerIndex <= 2) return;

	// recursive case
	else {
		
		size_t pivotIndex = lowerIndex + 2;
		size_t tempUpperIndex = upperIndex;
		for(size_t i = lowerIndex; i != tempUpperIndex; i++) {
			
			std::cout << "i: " << i << ", pivotIndex: " << pivotIndex;
			std::cout << ", listati: " << list->at(i);
			std::cout << ", pivotValue: " << list->at(pivotIndex);
			std::cout << ", tempUpperIndex: " << tempUpperIndex << std::endl;

			for(size_t j = lowerIndex; j <= upperIndex; j++)
				std::cout << list->at(j) << ", ";
			std::cout << std::endl;

			if(i == pivotIndex) {

				std::cout << "move pivot up 1" << std::endl;
				swap(list, pivotIndex, i+1);
				pivotIndex = i + 1;
				i--;
			}

			else if(list->at(i) > list->at(pivotIndex)) {

				std::cout << "swapping: " << list->at(i);
				std::cout << " at index: " << i;
				std::cout << " with: " << list->at(tempUpperIndex);
				std::cout << " at index: " << tempUpperIndex << std::endl;
				swap(list, i, tempUpperIndex);
				tempUpperIndex--;
				i--;
			}

			else if(list->at(i) > list->at(pivotIndex)) {

				std::cout << "swapping: " << list->at(i);
				std::cout << " at index: " << i;
				std::cout << " with: " << list->at(tempUpperIndex);
				std::cout << " at index: " << tempUpperIndex << std::endl;
				swap(list, i, tempUpperIndex);
				tempUpperIndex--;
				i--;
			}




			std::cout << "------------------------------" << std::endl;
		}

		for(size_t m = 0; m < list->size(); m++) {
			std::cout << list->at(m) << ", ";
		}
		std::cout << "\b\b" << std::endl;

		std::cout << "new recursive call" << std::endl;
		sortHelper(list, lowerIndex, pivotIndex - 1);
		sortHelper(list, pivotIndex + 1, upperIndex);
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
	
