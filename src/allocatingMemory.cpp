#include <iostream>
#include "misc/Cat.h"
using namespace std;

void allocatingMemory(){

	Cat* cat1 = new Cat();
	delete cat1;

	//----------------------------------------------------------------------------------

	Cat* cats = new Cat[10]; // Cat created * 10

	cats[5].setName("Pisiki");
	cats[5].speak();

	delete [] cats; // delete all the array, Destructor called * 10

	//----------------------------------------------------------------------------------

	char* pChar = new char[1000];
	delete [] pChar;

	//----------------------------------------------------------------------------------

	char alphabet[] = "abcdefghijklmnopqrstuvwxyz";
	int length = sizeof(alphabet) - 1;
	Cat* alphabetCats = new Cat[length];

	for(int i = 0; i < length; i++){
		string name(1, alphabet[i]);
		alphabetCats[i].setName(name);
		alphabetCats[i].speak();
	}

	delete [] alphabetCats;

}
