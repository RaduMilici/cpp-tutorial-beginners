#include <iostream>
using namespace std;

class Frog{
public:
	Frog(string name): name(name) {  }
	void info() { cout << "Frog's name is " << getName() << endl; }
private: // fields
	string name;
private: // methods
	string getName() { return name; }
};

void encalpuslation(){

	Frog frog("Nietzsche");
	frog.info(); // Frog's name is Nietzsche

}
