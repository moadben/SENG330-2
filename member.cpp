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

string member::get_name() const{
	return member_name;
}

int member::get_contract() const{
	return contract_length;

int main(){
}
