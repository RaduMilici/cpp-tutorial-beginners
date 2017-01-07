#include <iostream>
#include <cstdlib>
#include <time.h>
#include "Fighter.h"
using namespace std;

const int MAX_DAMAGE = 50;
//PUBLIC***************************************************************
Fighter::Fighter(string name): name(name){
	srand(time(NULL));
	health = 100;
};
//---------------------------------------------------------------------
void Fighter::takeDamage(int damage){
	health -= damage;
	cout << name << " takes " << damage << " damage." << endl;
	cout << "Health: " << health << endl;
}
//---------------------------------------------------------------------
void Fighter::dealDamage(Fighter& enemy){
	int damage = rollDamage();
	enemy.takeDamage(damage);
}
//---------------------------------------------------------------------
bool Fighter::isAlive(){
	bool alive = health > 0;

	if(alive == false)
		cout << name << " has died!" << endl;

	return alive;
}
//---------------------------------------------------------------------
string Fighter::getName(){
	return name;
}
//PRIVATE**************************************************************
int Fighter::rollDamage(){
	return rand() % MAX_DAMAGE;
}

