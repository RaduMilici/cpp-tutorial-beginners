#include <iostream>

using namespace std;

void arithmetic(){

	double val1 = 7 / 2;
	cout << val1 << endl; // 3

	// Either declare as float
	val1 = 7.0 / 2.0;
	cout << val1 << endl; // 3.5

	// or use casting.
	val1 = (float)7 / 2;
	cout << val1 << endl; // 3.5

	// Decimals are thrown away for ints.
	int val2 = 7.3;
	cout << val2 << endl; // 7

	int val3 = 8;
	val3++;

}
