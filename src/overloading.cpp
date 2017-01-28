#include <iostream>
#include "misc/Person.h"

using namespace std;

void overloading(){
	Person person1;
	Person person2("radu", 27);

	cout << person1.toString() << endl;
	cout << person2.toString() << endl;
}
