#include <iostream>
#include "member.h"

member::member() {
	contract_length = 0;
}

member::member(char* name, int contract){
	member_name = name;
	contract_length = contract;
}

member::~member(){

}

char* member::get_name() const{
	return member_name;
}

int member::get_contract() const{
	return contract_length;
}

void member::set_name(char* new_name) {
	member_name = new_name;
}

void member::renew_contract(int cont) {
	contract_length = contract_length+cont;
}

int main(){
	
}
