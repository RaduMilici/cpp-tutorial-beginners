#include <iostream>
#include "Goat.h"
using namespace std;

namespace unused {

Goat::Goat() {
	cout << "unused namespace Goat created" << endl;

}

Goat::~Goat() {
	cout << "unused namespace Goat destroyed" << endl;
}

void Goat::speak(){
	cout << "unused namespace " << GOAT_SOUND << endl;
}

} /* namespace unused */
