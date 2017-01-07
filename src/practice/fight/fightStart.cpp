#include <iostream>
#include "Fighter.h"
#include "Brawl.h"
using namespace std;

void fightStart(){
	Fighter orc("Thrall");
	Fighter human("Lothar");

	Brawl tavernBrawl(orc, human);
	tavernBrawl.start();

}
