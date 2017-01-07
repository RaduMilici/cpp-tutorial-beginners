#include <iostream>
#include <sstream>
using namespace std;

void stringStream(){

	int age = 27;
	string name = "radu";
	stringstream info;

	info << "Name: " << name << "; Age: " << age;

	cout << info << endl; // 0x7ffe2545c630
	cout << info.str() << endl; // Name: radu; Age: 27

}
