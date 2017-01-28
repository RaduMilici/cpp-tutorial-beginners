#include <iostream>

using namespace std;


void ifCheck(){
  string password = "hello";
  cout << "enter password > " << flush;

  string userInput;
  cin >> userInput;

  if(userInput == password)
    cout << "welcome to the bat cave" << endl;

  if(userInput != password)
    cout << "access denied" << endl;
}
