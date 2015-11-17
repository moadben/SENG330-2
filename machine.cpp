#include "machine.h"

machine::machine(){

}

machine::machine(std::string name){
	machine_name = name;
}

machine::~machine(){
	
}

std::string machine::get_name() const{
	return machine_name;
}

void machine::set_name(std::string new_name){
	machine_name = new_name;
}

machine* machine::clone(){
	return new machine(machine_name);
}

