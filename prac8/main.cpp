#include <iostream>

#include "BubbleSort.h"
#include "RecursiveBinarySearch.h"


int main(int argc, char* argv[]) {
	
	std::cout << "argc < 3" << std::endl;
	std::cout << "argv[1]: " << argv[1] << std::endl;
	std::cout << "size of argv[1]: " << sizeof(*argv[1]) << " vs sizeof(char): " << sizeof(char) << std::endl;
	std::cout << *argv[1] << std::endl;

	// program guard
	if(argc < 3) return -1;
	if(sizeof(*argv[1]) != sizeof(char)) return -1;
	if(*argv[1] != 'B' && *argv[1] != 'Q') return -1;

	// load sort list
	std::vector<int> sortList;
	for(size_t i = 2; i < argc; i++) 
		sortList.push_back(atoi(argv[i]));	

	// bubble sort
	BubbleSort bs;
	std::vector<int> sortedList = bs.sort(sortList);

	for(size_t i = 0; i < sortedList.size(); i++)
		std::cout << sortedList.at(i) << ", ";
	std::cout << "\b\b" << std::endl;

	return 0;
}
