#include <iostream>

using namespace std;


void doWhileLoop(){
  const string passowrd = "hello";
  string userInput;

  do {
    cout << "enter password > " << flush;
    cin >> userInput;
  }
  while (userInput != passowrd);
}
