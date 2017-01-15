#include <iostream>
#include "Goat.h"
using namespace std;

namespace animals {

Goat::Goat() {
	cout << "animals namespace Goat created" << endl;

}

Goat::~Goat() {
	cout << "animals namespace Goat destroyed" << endl;
}

void Goat::speak(){
	cout << "animals namespace " << GOAT_SOUND << endl;
}

} /* namespace animals */
