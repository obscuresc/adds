// RecursiveBinarySearch.cpp
#include "RecursiveBinarySearch.h"

int RecursiveBinarySearch::search(int query, std::vector<int> list, int start, int end) {

	// check value in middle of list
	size_t middleIndex = (end - start) / 2;
	if(list.at(middleIndex) == query)
		return middleIndex;
	else if(list.at(middleIndex) > query)
		search(query, list, start, middleIndex - 1);
	else if(list.at(middleIndex) < query)
		search(query, list, middleIndex + 1, end);

	return -1;
}
