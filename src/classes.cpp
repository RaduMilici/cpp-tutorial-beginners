#include <iostream>
#include "misc/Cat.h"
#include "misc/Dog.h"
#include "misc/Orc.h"

using namespace std;

void classes(){

	/*
	Cat pisiki;
	Cat gliba;

	pisiki.jump();
	gliba.speak();

	Dog lipu;

	lipu.bark();
	lipu.fetch();
	*/

	cout << "start" << endl;

	Orc teslea(50);
	teslea.speak();

	cout << teslea.getName() << endl;

	teslea.setName("ululul");
	teslea.speak();

	cout << "stop" << endl;

} 
