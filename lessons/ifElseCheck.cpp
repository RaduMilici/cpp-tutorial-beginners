#include <iostream>

using namespace std;


void ifElseCheck(){
  cout << "1.\tAdd name" << endl;
  cout << "2.\tRemove name" << endl;
  cout << "3.\tQuit" << endl;
  cout << "Enter choice" << endl;

  int userNum;
  cin >> userNum;

  if(userNum == 1)
    cout << "Adding name" << endl;
  else if(userNum == 2)
    cout << "Removing name" << endl;
  else if(userNum == 3)
    cout << "Quitting" << endl;
}
