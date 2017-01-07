#include <iostream>

using namespace std;

#include <iomanip>
/*
  input output manipulation
  http://www.cplusplus.com/reference/iomanip/
*/

void floatTypes(){
  int value = 6.8;
  int precision = 20;
  cout << "int value is " << value << endl;    // 6

  float fValue = 6.8;
  // write floating-point values in scientific notation
  // 6.800000e+00
  cout << scientific << "scientific float fValue is " << fValue << endl;

  // write floating-point values in fixed-point notation
  // 6.800000
  cout << fixed << "fixed float fValue is " << fValue << endl;

  // 6.80000019073486328125
  cout << setprecision(precision) << "float fValue 20 digis: " << fValue << endl;
  cout << endl;

  double dValue = 123.456789876543210123456789;
  cout << "size of double " << sizeof(double) << endl; // 8 bytes
  cout << setprecision(precision) << "double dValue: " << dValue << endl;
  cout << endl;

  long double lValue = 123.456789876543210123456789;
  cout << "size of long double " << sizeof(long double) << endl; // 16 bytes
  cout << setprecision(precision) << "long lValue: " << lValue << endl;
  cout << endl;
}
