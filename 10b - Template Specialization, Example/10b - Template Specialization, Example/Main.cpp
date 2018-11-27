/*
* Name:       Amarjit Singh
*
* Course:     Personal Re-Learn of C++ - Project 10b
*
* Date:       08/13/2016
*
* Filename:   Main.cpp
*
* Purpose:    Learn about Template Specialization
*
*/

#include <iostream>
using namespace std;

template <class T>	// create template
class MyClass {		// create class
public:
	MyClass(T x) {	// class constructor, used for any passed value
		cout << x << " -  not a char" << endl;
	}
};

template < >	// create template, empty due to specilization
class MyClass<char> {	//create class, specilization for char
public:
	MyClass(char x) {	// class constructor special for char
		cout << x << " is a char!" << endl;
	}
};

int main() {
	MyClass<int> ob1(42);			// create object for certain datatypes
	MyClass<double> ob2(5.47);
	MyClass<char> ob3('s');			// output for this object will use template specilization

	system("pause");
	return 0;
}