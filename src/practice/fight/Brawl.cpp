#include <iostream>
#include "Brawl.h"
using namespace std;

//PUBLIC***************************************************************
Brawl::Brawl(Fighter& a, Fighter& b){
	fighters[0] = &a;
	fighters[1] = &b;
}
//---------------------------------------------------------------------
void Brawl::start(){
	cout << "Brawl between " << (*fighters[0]).getName() << flush;
	cout << " and " << (*fighters[1]).getName() << flush;
	cout << " is about to begin!" << endl;
	cout << "------" << endl;

	keepFighting();
}
//PRIVATE**************************************************************
void Brawl::keepFighting(){

	while(areBothAlive()){
		(*fighters[0]).dealDamage(*fighters[1]);
		swapPlaces();
		cout << "------" << endl;
	}

	cout << "Brawl over!" << endl;
}
//---------------------------------------------------------------------
bool Brawl::areBothAlive(){
	return (*fighters[0]).isAlive() && (*fighters[1]).isAlive();
}
//---------------------------------------------------------------------
void Brawl::swapPlaces(){
	Fighter* swap = fighters[0];
	fighters[0] = fighters[1];
	fighters[1] = swap;
}
//---------------------------------------------------------------------
