// BubbleSort.cpp
#include "BubbleSort.h"


std::vector<int> BubbleSort::sort(std::vector<int> list) {

	// sort such that highest value are stored in the highest index
	for(size_t i = 0; i < list.size(); i++) {

		// grab a left index and right index and compare
		size_t m = 0;
		while(m < list.size() - 1) {

			if(list.at(m) > list.at(m + 1)) {
				int temp = list.at(m);
				list.at(m) = list.at(m + 1);
				list.at(m + 1) = temp;
			}
		
			m = m + 1;
		}
	}

	return list;
}
