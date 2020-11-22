// PaperDoll.h
#ifndef _PAPERDOLL_H 
#define _PAPERDOLL_H 

#include <cstdlib>
#include <ctime>

#include "Computer.h"
#include "types.h"

class PaperDoll : public Computer {

	public:
		PaperDoll();
		std::string getName() override;

};

#endif // _PAPERDOLL_H 
