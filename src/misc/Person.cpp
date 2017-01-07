#include <iostream>
#include <sstream>
#include "Person.h"

using namespace std;

Person::Person() {
	name = "undefined";
	age = 0;
}

Person::Person(string name, int age){
	this -> name = name;
	this -> age = age;
}

string Person::toString(){
	stringstream info;
	info << "name: " << name << " age: " << age;
	return info.str();
}


