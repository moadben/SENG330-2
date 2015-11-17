#include <iostream>
#include <vector>

#ifndef ELLIPTICAL_H
#define ELLIPTICAL_H

#include "machine.h"

class elliptical : public machine{
	public:
		elliptical(char*);
		int minutes_used();
		elliptical* clone();
	private:
		
};

#endif
