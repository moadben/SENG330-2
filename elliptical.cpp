#include "elliptical.h"
#include "machine.h"
#include <iostream>
#include <vector>

elliptical::elliptical(char* mach_name){
	machine_name = mach_name;
	char type[] = "ellpitical";
	machine_type = type;
}

int elliptical::minutes_used(){
	int time = 10;
	return time;
}


elliptical* elliptical::clone(){
	return new elliptical(machine_name);
}
