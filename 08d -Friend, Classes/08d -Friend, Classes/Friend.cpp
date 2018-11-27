/*
* Name:       Amarjit Singh
*
* Course:     Personal Re-Learn of C++ - Project 07d
*
* Date:       08/12/2016
*
* Filename:   Friend.cpp
*
* Purpose:    Learn about the Friend keyword, for classes
*/

#include <iostream>
using namespace std;

class MyClass {	// create the class
public:
	MyClass() {	// create the class constructor
		regVar = 0;	// initilize the datatype
	};
private:
	int regVar;	// private datatype, only for this class

	friend void someFunc(MyClass &obj);	// extend all of this class to friend function, notice &
};

void someFunc(MyClass &obj) {	// create function, notice &
	obj.regVar = 42;	// chnage the value of class private datatype
	cout << obj.regVar;	// view
}

int main() {
	MyClass obj;	// create class object
	someFunc(obj);	// pass object to the function

	cout << endl;
	system("pause");
	return 0;
}
