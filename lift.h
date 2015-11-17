#include <iostream>
#include <vector>

#ifndef LIFT_H
#define LIFT_H

#include "machine.h"

class lift : public machine{
	public:
		lift(char*);
		int repetitions();
		int weight_lifted();
		lift* clone();
	private:
	
};

#endif
