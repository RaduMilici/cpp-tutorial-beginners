#include <iostream>
using namespace std;

void pointerArithmetic(){

	const int LENGTH = 5;
	string texts[LENGTH] = { "one", "two", "three", "four", "five" };
	string* pTexts = texts;

	cout << *pTexts << endl; // one
	pTexts++;
	cout << *pTexts << endl; // two
	pTexts += 3;
	cout << *pTexts << endl; // five
	pTexts -= 4;
	cout << *pTexts << endl; // one
	//--------------------------------------------------------------------------------------
	// reset to start
	pTexts = &texts[0];
	// not 'LENGHT-1' so NOT the last element
	string* pEnd = &texts[LENGTH];
	int elements = pEnd - pTexts;

	cout << elements << endl; // 5
	//--------------------------------------------------------------------------------------
	// reset to start
	pTexts = &texts[0];
	pTexts += LENGTH / 2;
	cout << *pTexts << endl; // three (5 / 2 = 2.5 rounded to 2, second element)

}
