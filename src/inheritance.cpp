#include <iostream>
using namespace std;

//--------------------------------------------------------------------------------------
class Animal{
public:
	void speak(){ cout << "i am an animal" << endl; }
};
//--------------------------------------------------------------------------------------
class Horse: public Animal{
public:
	void jump(){ cout << "horse jumps!" << endl; }
};
//--------------------------------------------------------------------------------------
class Nonius: public Horse{
public:
	void useTelepathy(){
		cout << "only the Nonius breed of horses may use telepathy " << flush;
		cout << "after prolonged exposure to gamma radiation" << endl;
	}
};

void inheritance(){

	Nonius a;
	a.speak(); // i am an animal
	a.jump();  // horse jumps!
	a.useTelepathy(); // all that jazz

}
