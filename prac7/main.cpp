#include "iostream"

#include "Individual.h"
#include "Mutator.h"


int main(int argc, char * argv[]) {

	// test Individual class functions
	Individual individual1("1001011111");
	std::cout << individual1.getMaxOnes() << std::endl;
}
