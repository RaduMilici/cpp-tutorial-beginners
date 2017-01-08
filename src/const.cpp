#include <iostream>
using namespace std;

void pointer_to_constant_data();
void pointers_with_const_memory_address();
void const_data_with_const_pointer();
//--------------------------------------------------------------------------------------
class Animal{
public:
	void setName(string name) { this -> name = name; };
	// declaring a method 'const' will prevent you from changing instance data like name
	void speak() const { cout << "My name is " << name << endl; };
private:
	string name;
};
//--------------------------------------------------------------------------------------
void const_(){

	const int VAL = 7;
	//VAL = 10; // error: assignment of read-only variable ‘VAL’
	cout << VAL << endl; // 7

	//----------------------------------------------------------------------------------

	Animal cat;
	cat.setName("Pisiki");
	cat.speak();
	cout << endl;

	//----------------------------------------------------------------------------------

	pointer_to_constant_data();
	pointers_with_const_memory_address();
	const_data_with_const_pointer();

}
//--------------------------------------------------------------------------------------
void pointer_to_constant_data(){
	cout << "pointer_to_constant_data" << endl;
	/*
	 * !!!
	 * A pointer to const data does not allow modification of the data through the
	 * pointer.
	 * !!!
	 * Think of this as reading that '*pValue' is a "const int".
	 * So the pointer is changeable, but you definitely can't touch
	 * what 'pValue' points to. The key here is that the const appears before the *.
	 *
	 * */
	int val1 = 8;
	/*
	 * const int* pValue read backwords:
	 * *     - pValue is a pointer
	 * int   - to an int
	 * const - that is constant
	 * */
	const int* pValue = &val1;
	cout << *pValue << endl; // 8

    //can't touch what 'pValue' points to
	// *pValue = 12; // error: assignment of read-only location ‘* pValue’

	// the pointer IS changeable
	int val2 = 10;
	pValue = &val2;
	cout << *pValue << endl; // 10
	cout << endl;
}
//--------------------------------------------------------------------------------------
void pointers_with_const_memory_address(){
	cout << "pointers_with_const_memory_address" << endl;
	/*
	 * !!!
	 * Pointers with a constant memory address are declared by including the const
	 * after the *. Because the address is const, the pointer must be assigned
	 * a value immediately.
	 * !!!
	 * */

	int val1 = 10;
	/*
	 * int* const pValue read backwords:
	 * const - pValue is a constant
	 * *     - pointer
	 * int   - that points to an int
	 * */
	int* const pValue = &val1;
	cout << *pValue << endl; // 10

	int val2 = 29;
	// !!! cant change, the address stored in the pointer itself is const !!!
	//pValue = &val2; // error: assignment of read-only variable ‘pValue’

	cout << endl;

}
//--------------------------------------------------------------------------------------

void const_data_with_const_pointer(){
	cout << "const_data_with_const_pointer" << endl;
	/*
	 * To combine the two modes of const-ness with pointers, you can simply
	 * include const for both data and pointer by putting const both before
	 * and after the *
	 */
	int value = 29;
	const int * const pValue = &value;

	// error: assignment of read-only location ‘*(const int*)pValue’
	//*pValue = 2;

	int value2 = 5;
	// error: assignment of read-only variable ‘pValue’
	//pValue = &value2;

	cout << *pValue << " at " << pValue << endl;
	cout << endl;
}






















