#include <iostream>
using namespace std;

void show1( string texts[], const int length ){

	for(int i = 0; i < length; i++)
		cout << texts[i] << endl;
}
//------------------------------------------------------------------------------
void show2( string *texts, const int length ){

	for(int i = 0; i < length; i++)
		cout << texts[i] << endl;
}
//------------------------------------------------------------------------------
void show3( string (&texts)[3] ){

	for(unsigned int i = 0; i < sizeof(texts) / sizeof(string); i++)
		cout << texts[i] << endl;
}
//------------------------------------------------------------------------------
string* getArray(){
	/*
	 * do not do this
	 * returns a pointer to a local variable
	string texts[] = { "one", "two", "three" };
	return texts;
	*/
}
//------------------------------------------------------------------------------
char* getMemory(){
	char* pMem = new char[100];
	return pMem;
}
//------------------------------------------------------------------------------
void arraysAndFunctions(){

	string texts[] = { "apple", "orange", "banana" };
	show3(texts);

	char* pMem = getMemory();
	delete [] pMem;

}
//------------------------------------------------------------------------------
