#include <sstream>
#include "Dwarf.h"

using namespace std;

Dwarf::Dwarf() {
	name = "";
	age = 0;
}

Dwarf::Dwarf(string name): name(name) {
	age = 0;
}

Dwarf::Dwarf(string name, int age)/*OR : name(name), age(age) AND delete 'this->' references*/{
	this -> name = name;
	this -> age = age;

	cout << "Memory location of object: " << this << endl;
}

string Dwarf::toString(){
	stringstream info;
	info << "name: " << name << " age: " << age;
	return info.str();
}
