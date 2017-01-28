#include <iostream>
#include "misc/Goat.h"
#include "misc/animals/Goat.h"

using namespace std;
using namespace animals;

void namespaces(){

	unused::Goat goat;
	goat.speak();

	cout << endl;

	/*animals::*/Goat goat2;
	goat2.speak();

	cout << endl;

	cout << "unused goat says " << unused::GOAT_SOUND << endl;
	cout << "animals goat says " << animals::GOAT_SOUND << endl;
}
