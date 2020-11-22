// Toolbox.h
#ifndef _TOOLBOX_H 
#define _TOOLBOX_H 

#include <cstdlib>
#include <ctime>

#include "Computer.h"
#include "types.h"

class Toolbox : public Computer {

	public:
		Toolbox();
		std::string getName() override;

};

#endif // _TOOLBOX_H 
