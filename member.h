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
		
		//Mutator Functions
		void set_name(char*);
		void renew_contract(int);
		
	private:
		//Variables
		char* member_name;
		int contract_length;
		
		

};

#endif
