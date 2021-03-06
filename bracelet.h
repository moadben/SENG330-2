#include <iostream>
#include <vector>

#ifndef BRACELET_H
#define BRACELET_H

#include "member.h"
#include "machine.h"


class bracelet : public member, public machine{
	public:
		//Default Constructor
		bracelet();
		
		//Overload Constructor
		bracelet(char*);
		
		//Destructor
		~bracelet();
		
		//Accessor Functions
		char* get_owner() const;
		std::vector<machine> machines_used() const;
		
		//Mutator Functions
		void change_owner(char*);
		void remove_owner();
		void add_machine(machine);
	private:
		//Vectors
		char* owner;
		std::vector<machine> used_machines;

};

#endif
