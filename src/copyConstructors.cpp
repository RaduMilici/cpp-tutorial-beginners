#include <iostream>
using namespace std;

/*
 * https://www.tutorialspoint.com/cplusplus/cpp_copy_constructor.htm
 * http://www.cplusplus.com/articles/y8hv0pDG/
 * */

//--------------------------------------------------------------------------------------
class Gnome{
public:
	Gnome() { cout << "Gnome created" << endl; };
	// COPY CONSTRUCTOR
	// !can only call const methods from const variables, so dont modify instance data!
	Gnome(const Gnome& other): name(other.name){
		cout << "Gnome created by copying" << endl;
		//name = other.name; //or like this
	};
	// END COPY CONSTRUCTOR
	void setName(string name) { this -> name = name; };
	void speak() const { cout << "My name is " << name << endl; };
private:
	string name;
};
//--------------------------------------------------------------------------------------
void copyConstructors(){

	Gnome gnome1; // Gnome created
	gnome1.setName("Pisiki");
	Gnome gnome2 = gnome1; // Gnome created by copying
	//----------------------------------------------------------------------------------
	/*
	 * DEFAULT COPY CONSTRUCTOR
	 * gnome2's name would be Pisiki, because it copies gnome1.
	 *
	 * */
	//gnome2.speak(); // My name is Pisiki
	//----------------------------------------------------------------------------------
	/*
	 * DEFINED EMPTY COPY CONTRUCTOR
	 * name is not defined because it did not copy gnome1
	 * */
	//gnome2.speak(); // My name is
	//----------------------------------------------------------------------------------
	/*
	 * CUSOTOM COPY CONSTRUCTOR
	 * name is once again copied (manually) from gnome1
	 * */
	//gnome2.speak(); // My name is Pisiki
	//----------------------------------------------------------------------------------

	gnome2.setName("Gliba");
	gnome1.speak(); // My name is Pisiki
	gnome2.speak(); // My name is Gliba

	//----------------------------------------------------------------------------------
	// another way of calling the copy constructor

	Gnome gnome3(gnome1); // Gnome created by copying
	gnome3.speak(); // My name is Pisiki


}
//--------------------------------------------------------------------------------------





































