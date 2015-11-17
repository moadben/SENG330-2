#include <iostream>

#ifndef MACHINE_H
#define MACHINE_H

class machine{
	public:
		//Default Constructor
		machine();
		
		//Overload Constructor
		machine(char*);
		
		//Destructor
		~machine();
		
		//Accessor functions
		char* get_name() const;
		
		//Mutator functions
		void set_name(char*);
	protected:
		//Variables
		char* machine_name;
		char* machine_type;
		
};

#endif
