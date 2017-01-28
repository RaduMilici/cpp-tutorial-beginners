#include <iostream>

using namespace std;

void manipulate(double value){
	value = 10.0;
	cout << "value in manipulate: " << value << endl;
}
//--------------------------------------------------------------------------------------
void manipulatePointer(double* pValue){
	*pValue = 10.0;
	cout << "value in manipulatePointer: " << *pValue << endl;
}
//--------------------------------------------------------------------------------------
void pointers(){

	string nVal = "radu"; // value
	string* pVal = &nVal; // pointer to a memory adress (ex: 0x7fffd57f8d1c)
	cout << "value: " << nVal << endl;              // radu
	cout << "adress: " << pVal << endl;             // 0x7fffd57f8d1c
	cout << "value via pointer: " << *pVal << endl; // dereference the pointer, radu
	cout << endl;
	//----------------------------------------------------------------------------------
	double dVal = 123.4;
	cout << "dVal: " << dVal << endl; // 123.4
	manipulate(dVal);                 // 10
	cout << "dVal: " << dVal << endl; // 123.4
	cout << endl;
	//----------------------------------------------------------------------------------
	manipulatePointer(&dVal);         // 10
	cout << "dVal: " << dVal << endl; // 10

}
