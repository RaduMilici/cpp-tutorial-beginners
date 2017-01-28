#include <iomanip>
#include <iostream>

using namespace std;

void compareFloats(){
  float val1 = 1.1;

  // comparing floats with == yields unpredictable results
  if(val1 == 1.1)
    cout << "equal" << endl;
  else
    cout << "not equal" << endl;

  // not equal

  cout << setprecision(10) << val1 << endl; // 1.100000024
}
