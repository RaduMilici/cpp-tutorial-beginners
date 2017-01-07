#include <iostream>
using namespace std;

void pointersAndArrays(){
	string texts[] = {"one", "two", "three"};
	string* pTexts = texts; // possible because pointers and arrays are very similar
	int length = sizeof(texts) / sizeof(string);

	cout << "number of elements in array: " << length << endl;

	// can iterate through array using pointer
	for(int i = 0; i < length; i++){
		cout << pTexts[i] << " " << flush;
	}
	cout << endl;
//--------------------------------------------------------------------------------------
	// pointer points to the first element
	for(int i = 0; i < length; i++){
		cout << *pTexts << " " << flush; // one one one
	}
	cout << endl;
//--------------------------------------------------------------------------------------
	// increment the pointer to access elements
	for(int i = 0; i < length; i++){
		cout << *pTexts << " " << flush; // one two three
		pTexts++;
	}
	cout << endl;
//--------------------------------------------------------------------------------------
	string* pElement = &texts[0];
	string* pEnd = &texts[length - 1];

	while(true){
		cout << *pElement << " " << flush;

		if(pElement == pEnd){
			cout << endl;
			cout << "end of the array" << endl;
			break;
		}

		pElement++;
	}
//--------------------------------------------------------------------------------------
	// just practice
	int nums[] = { 29, 05, 1989 };
	int* pNums = nums;
	length = sizeof(nums) / sizeof(int);

	for(int i = 0; i < length; i++){
		cout << *pNums++ << " " << flush;
	}

}
