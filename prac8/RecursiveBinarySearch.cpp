// RecursiveBinarySearch.cpp
#include "RecursiveBinarySearch.h"

int RecursiveBinarySearch::search(int query, std::vector<int>* list, int start, int end) {

	// function guard
	if(start < -1 || end >= list->size() || start > end) return -1;

	// check value in middle of list
	int middleIndex = start + (end - start) / 2;
	if(list->at(middleIndex) == query)
		return middleIndex;
	else if(list->at(middleIndex) > query) {
		return search(query, list, start, middleIndex - 1);
	}
	else if(list->at(middleIndex) < query) {
		return search(query, list, middleIndex + 1, end);
	}

	return -1;
}
