#include <iostream>

using namespace std;

#include <limits.h>
/*
  http://www.cplusplus.com/reference/climits/

  This header defines constants with the limits of fundamental integral types for
  the specific system and compiler implementation used.
*/

void integerTypes(){

  //int value = 931233242423423; // will cout -1566695297
  int value = 2147483647;
  cout << "int of value 931233242423423 is: " << value << endl;
  cout << "max int value is: " << INT_MAX << endl; // 2147483647
  cout << "min int value is: " << INT_MIN << endl; // -2147483648
  cout << endl;

  long int lValue = 931233242423423; // will cout same value
  cout << "long int of value 931233242423423 is: " << lValue << endl;
  cout << "max long int value is: " << LONG_MAX << endl; // 9223372036854775807
  cout << "min long int value is: " << LONG_MIN << endl; // -9223372036854775808
  cout << endl;

  //short int sValue = 29051989;
  short int sValue = 32767;
  cout << "short int of value 29051989 is: " << sValue << endl;
  cout << "max short int value is: " << SHRT_MAX << endl; // 32767
  cout << "min short int value is: " << SHRT_MIN << endl; // -32768
  cout << endl;

  cout << "size of int: " << sizeof(int) << endl; // 4 bytes, 32 bits
  cout << "size of short int: " << sizeof(short int) << endl; //2 bytes, 16 bits

  unsigned int uValue = 29051989; // can only be positive
  cout << "max unsigned int value is: " << UINT_MAX << endl; // 4294967295

}
