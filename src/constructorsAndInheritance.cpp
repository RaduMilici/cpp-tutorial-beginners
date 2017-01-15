#include <iostream>
using namespace std;

//--------------------------------------------------------------------------------------
class Machine{
public:
	Machine(): id(0){
		cout << "Machine no argument constructor called" << endl;
	}
	void info(){ cout << "id: " << id << endl; }
private:
	int id;
};
//--------------------------------------------------------------------------------------
class Vehicle: public Machine{
public:
	Vehicle(){
		cout << "Vehicle no argument constructor called" << endl;
	}
};
//--------------------------------------------------------------------------------------

void constructorsAndInheritance(){

	Vehicle vehicle;
	/*
	 * Machine no argument constructor called
	 * Vehicle no argument constructor called
	 * */
	vehicle.info();

}
