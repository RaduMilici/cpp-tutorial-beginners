#include <iostream>
using namespace std;

void changeValue(double& value);
//--------------------------------------------------------------------------------------
void references(){

	int value1 = 8;
	int value2 = value1;

	value2 = 10;

	cout << "value1: " << value1 << endl; // 8
	cout << "value2: " << value2 << endl; // 10
	cout << endl;
	//----------------------------------------------------------------------------------
	int value3 = 8;
	int& value4 = value3;

	value4 = 10;

	cout << "value3: " << value3 << endl; // 10
	cout << "value4: " << value4 << endl; // 10
	cout << endl;
	//----------------------------------------------------------------------------------

	double value5 = 123.4;
	changeValue(value5);
	cout << "value5: " << value5 << endl; // 4.321
}
//--------------------------------------------------------------------------------------
void changeValue(double& value){ // argument is passed by reference
	value = 4.321;
}
