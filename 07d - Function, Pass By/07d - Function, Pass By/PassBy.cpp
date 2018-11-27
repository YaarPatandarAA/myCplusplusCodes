/*
* Name:       Amarjit Singh
*
* Course:     Personal Re-Learn of C++ - Project 07d
*
* Date:       08/07/2016
*
* Filename:   PassBy.cpp
*
* Purpose:    Learn to pass by value or reference, in functions.
*/

#include<iostream>

using namespace std;

// create functions
void passByValue(int x) { // will copy the value from the function call
	x = 100;	// value wont change
}

void passByRef(int *x) {	// will copy the location of value
	*x = 100;	// will change
}

int main() {

	// data decleration and initilization
	int var1 = 20;
	int var2 = 20;

	passByValue(var1); // value will be copied but wont change
	passByRef(&var2);	// reference to value will be copied and actual value will change

	cout << var1 << endl; // outputs 20
	cout << var2 << endl; // outputs 100

	system("pause");
	return 0;
}