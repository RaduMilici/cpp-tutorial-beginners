#include "misc/functions.h"

void functions(){
  string name = getName();
  welcomeUser(name);
}

string getName(){
  cout << "what is your name? " << endl;
  string input;
  cin >> input;
  return input;
}

void welcomeUser(string name){
  cout << "Welcome to RobCo " << name << endl;
}