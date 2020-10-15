// Sort.h
#ifndef SORT_H
#define SORT_H

#include <cstdlib>
#include <iostream>
#include <vector>

class Sort {

	public:
		virtual void sort(std::vector<int>* list) = 0;
		void printList(std::vector<int>* list);

};

#endif // SORT_H
