#include "machine.h"

machine::machine(){

}

machine::machine(char* name){
	machine_name = name;
}

machine::~machine(){
	
}

char* machine::get_name() const{
	return machine_name;
}

void machine::set_name(char* new_name){
	machine_name = new_name;
}

int main(){
	
}
