#include <iostream>
#include <string>

#ifndef MACHINE_H
#define MACHINE_H

class machine{
	public:
		//Default Constructor
		machine();
		
		//Overload Constructor
		machine(std::string);
		
		//Destructor
		~machine();
		
		//Accessor functions
		std::string get_name() const;
		
		//Mutator functions
		void set_name(std::string);
		
		//Prototype function
		machine* clone();
	protected:
		//Variables
		std::string machine_name;
		std::string machine_type;
		
};

#endif
