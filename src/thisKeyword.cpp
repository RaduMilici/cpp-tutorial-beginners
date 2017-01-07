#include <iostream>
#include "misc/Dwarf.h"

using namespace std;

void thisKeyword(){

	Dwarf dwarf1;
	Dwarf dwarf2("magni", 500);

	cout << dwarf1.toString() << endl;
	cout << dwarf2.toString() << "; memory location: " << &dwarf2 << endl;

}
