#include <iostream>
#include "Orc.h"

using namespace std;

Orc::Orc(int hp){
	cout << "Orc constructor" << endl;
	this -> hp = hp;
	name = "Thrall";
}

Orc::~Orc(){
	cout << "Orc destructor" << endl;
}

void Orc::speak(){
	cout << "my name is " << name << " and my hp is: " << hp << endl;
}

void Orc::fullHeal(){
	hp = 100;
}

void Orc::setName(string name){
	this -> name = name;
}

string Orc::getName(){
	return toString();
}

string Orc::toString(){
	return name;
}
