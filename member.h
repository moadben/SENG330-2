#include <iostream>
#include <string>

#ifndef MEMBER_H
#define MEMBER_H

class member {
	public:
		//Default Constructor
		member();
		
		//Overload Constructor
		member(char*, int);
		
		//Destructor
		~member();
		
		//Accessor Functions
		char* get_name() const;
		int get_contract() const;
	private:
		char* member_name;
		int contract_length;

};

#endif
