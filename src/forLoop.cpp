#include <iostream>

using namespace std;


void forLoop(){

  for (int i = 0; i < 10; i++) {

    if(i == 4){
      cout << "i = 4, continuing..." << endl;
      continue;
    }

    if(i == 8){
      cout << "i = 8, breaking..." << endl;
      break;
    }

    cout << i << endl;
  }

}
