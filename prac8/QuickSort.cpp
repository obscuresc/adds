// QuickSort.cpp
#include "QuickSort.h"

void QuickSort::sort(std::vector<int>* list) {

	// function guard
	if(list->size() < 2) return;

	// recursive helper
	sortHelper(list, 0, list->size() - 1);

}

void QuickSort::sortHelper(std::vector<int>* list, size_t lowerIndex, size_t upperIndex) {

	std::cout << "--->   sortHelperCall    <---" << std::endl;
	std::cout << "lowerIndex: " << lowerIndex << " upperIndex: " << upperIndex << std::endl;	
	printList(list);	

	size_t pivotIndex = lowerIndex + 2;
	if(upperIndex - lowerIndex == 1) pivotIndex = lowerIndex;
	std::cout << "pivotValue: " << list->at(pivotIndex) << std::endl;
	std::vector<int> lowerList;
	std::vector<int> upperList;
	
	for(size_t i = lowerIndex; i <=  upperIndex; i++) {

		if(i != pivotIndex) {

			if(list->at(i) <= list->at(pivotIndex)) {
				lowerList.push_back(list->at(i));
			}
			else {
				upperList.push_back(list->at(i));
			}
		}
	}	

	// load lower list with pivot
	lowerList.push_back(list->at(pivotIndex));

	std::cout << "lower list" << std::endl;	
	printList(&lowerList);
	std::cout << "upper list" << std::endl;	
	printList(&upperList);
	
	// overwrite lower portion of list selection
	for(size_t i = 0; i < lowerList.size(); i++)
		list->at(lowerIndex + i) = lowerList.at(i);

	std::cout << "after inserting lower list" << std::endl;	
	printList(list);

	// overwrite higher portion of list selection
	for(size_t i = 0; i < upperList.size(); i++)
		list->at(lowerIndex + lowerList.size() + i) = upperList.at(i);

	std::cout << "after inserting upper list" << std::endl;	
	printList(list);
	
	std::cout << "--------------------------" << std::endl;

	if(lowerList.size() > 2) {
		std::cout << "lower sublist call" << std::endl;
		std::cout << "list, " << lowerIndex << ", " << lowerList.size() - 2 << std::endl;
		sortHelper(list, lowerIndex, lowerIndex + lowerList.size());
	}

	std::cout << "upper sublist" << std::endl;
	std::cout << "list, " << lowerIndex + lowerList.size() << ", " << upperIndex << std::endl;
	sortHelper(list, lowerIndex + lowerList.size(), upperIndex); 
	
}
