#include <iostream>

#include "BubbleSort.h"
#include "QuickSort.h"
#include "RecursiveBinarySearch.h"

template <typename T, typename A>
void PrintVector(std::vector<T, A> list) {

	for(typename std::vector<T, A>::iterator it = list.begin(); it != list.end(); it++)
		std::cout << *it << ", " << std::endl;
	std::cout << "\b\b\n" << std::endl;

}


int main(int argc, char* argv[]) {
	
	// program guard
	if(argc < 3) return -1;
	if(sizeof(*argv[1]) != sizeof(char)) return -1;
	if(*argv[1] != 'B' && *argv[1] != 'Q') return -1;

	// load sort list
	std::vector<int> sortList;
	for(size_t i = 2; i < argc; i++) 
		sortList.push_back(atoi(argv[i]));	
	
	// load sort method
	char sortMethod = *argv[1];

	// sort
	BubbleSort bs;
	QuickSort qs;
	if(sortMethod == 'B') bs.sort(&sortList);
	else qs.sort(&sortList);
	std::cout << "sort results." << std::endl;
	PrintVector(sortList);

	// recursive binary search
	//	RecursiveBinarySearch rbs;
	// std::cout << "Position of value 6: " << rbs.search(6, sortList, 0, sortList.size() - 1) << std::endl;

	return 0;
}
