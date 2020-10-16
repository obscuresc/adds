// QuickSort.h
#ifndef QUICKSORT_H
#define QUICKSORT_H

#include "Sort.h"

class QuickSort: public Sort {

	public:
		void sort(std::vector<int>*) override;		
	
	private:
		size_t partition(std::vector<int>*, size_t, size_t);
		void sortHelper(std::vector<int>*, size_t, size_t);
		void swap(std::vector<int>*, size_t, size_t);
};

#endif // QUICKSORT_H
