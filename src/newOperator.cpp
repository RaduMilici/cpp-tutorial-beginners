#include <iostream>
#include "misc/Cat.h"
using namespace std;

Cat* createCat(string name);
//--------------------------------------------------------------------------------------
void newOperator(){

	Cat cat1;
	cat1.setName("Pisiki");
	cat1.speak();

	Cat* pCat2 = new Cat();

	//error: request for member ‘speak’ in ‘pCat2’, which is of pointer type ‘Cat*’
	//pCat2.speak();

	//will also error: dot operator has precedence over *
	//*pCat2.speak();

	// this works but is absolutely disgusting
	(*pCat2).setName("Gliba");
	(*pCat2).speak(); // My name is Gliba

	pCat2 -> setName("Vagauna");
	pCat2 -> speak(); // My name is Vagauna

	delete pCat2; // Vagauna Destructor called
	//----------------------------------------------------------------------------------

	Cat *cat3 = createCat("Xulna");
	cat3 -> speak(); // My name is Xulna
	delete cat3; // Xulna Destructor called

}
//--------------------------------------------------------------------------------------
/*
 * returning a pointer will not deallocate memory when going out of scope
 * returning a pointer will not copy the object but will return this newly created one
 * */
Cat* createCat(string name){
	Cat* pCat = new Cat();
	pCat -> setName(name);
	return pCat;
}
