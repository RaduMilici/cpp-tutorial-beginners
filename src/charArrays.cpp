#include <iostream>
using namespace std;

void reverseCharArray();
void swapChars(char* a, char* b);
//--------------------------------------------------------------------------------------

void charArrays(){

	char text[] = {'h', 'e', 'l', 'l', 'o'};
	cout << text << endl; // hello

	char charString[] = "hello";
	cout << charString << endl; // hello

	// sizeof(charString) = 6
	for(unsigned int i = 0; i < sizeof(charString); i++){
		cout << i << ": " << " int: " << (int)text[i] << " char: " << text[i]  << endl;
	}

	/*
	0:  int: 104 char: h
	1:  int: 101 char: e
	2:  int: 108 char: l
	3:  int: 108 char: l
	4:  int: 111 char: o
	5:  int: 0   char:

	number 5 is a 0 or the 'string terminator'
	tells system where string ends
	*/

	reverseCharArray();
}
//--------------------------------------------------------------------------------------
void reverseCharArray(){
	char name[] = "Uranium fever got me down";
	int length = sizeof(name) - 1; // -1 because last char is 0

	cout << endl;
	cout << name << " reversed is: " << endl;

	//method 1
	/*
	for(int i = 0; i < length / 2; i++){
		int otherEndIndex = length - 1 - i;
		swapChars(&name[i], &name[otherEndIndex]);
	}

	cout << name;
	*/

	//method 2
	char* nameStart = name;
	char* nameEnd = &name[length - 1];

	while(nameStart < nameEnd){
		swapChars(nameStart, nameEnd);
		nameStart++;
		nameEnd --;
	}

	cout << name;
}
//--------------------------------------------------------------------------------------
void swapChars(char* a, char* b){
	char swap = *a;
	*a = *b;
	*b = swap;
}
