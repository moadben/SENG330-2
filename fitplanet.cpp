#include <iostream>
#include <string>
#include <vector>
#include <fstream>

#include "member.h"
#include "machine.h"
#include "elliptical.h"
#include "lift.h"
#include "bracelet.h"
#include "fitplanet.pb.h"

using namespace std;

int main(){
	GOOGLE_PROTOBUF_VERIFY_VERSION;
	std::string name[15];
	std::string type[15];
	char* fname = "Machines";
	int i = 0;
	machines::Machines machine_list;
	machines::Machine* machine_s;
	
	  {
        fstream input(fname, ios::in | ios::binary);
        if (!machine_list.ParseFromIstream(&input)) {
            cout << "No machines saved!" << endl;
        }
    }
	
	while(type[i]!="q"){
		std::cout<<"Please enter a Machine type (either elliptical or lift, type q to quit): " << std::endl;
		std::cin >> type[i];
		if(type[i] == "q"){
			break;
		}
		
		std::cout<<"Please enter a Machine name" << std::endl;
		std::cin>> name[i];
		
		i++;
		
	}
	
	std::string standard = "standard";
	machine* machine_1 = new elliptical(standard);
	machine* machine_2 = new lift(standard);
	
	machine* machines[15];
	
	for(int j = 0; j<i; j++){
		if(type[j] == "elliptical"){
			machines[j] = machine_1->clone();
			machines[j]->set_name(name[j]);
			machine_s = machine_list.add_machine();
			machine_s->set_machine_name(name[j]);
			machine_s->set_machine_type(type[j]);
		}
		else if(type[j] == "lift"){
			machines[j] = machine_2->clone();
			machines[j]->set_name(name[j]);
			machine_s = machine_list.add_machine();
			machine_s->set_machine_name(name[j]);
			machine_s->set_machine_type(type[j]);
		}
		else{
			std::cout<<"The type for machine[] is invalid"<<std::endl;
		}
	}
	
	 {

    std::fstream output(fname, ios::out | ios::trunc | ios::binary);
    if (!machine_list.SerializeToOstream(&output)) {
      cerr << "Failed to add machines." << endl;
      return -1;
    }
  }
		
	
}
