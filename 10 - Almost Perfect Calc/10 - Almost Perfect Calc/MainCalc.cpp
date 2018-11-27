/*
* Name:       Amarjit Singh
*
* Course:     Personal Re-Learn of C++ - Project 10
*
* Date:       08/12/2016
*
* Filename:   MainCalc.cpp
*
* Purpose:    Learn aboue function templeates, includes multiple parameters
*
*/

#include <iostream>
using namespace std;

template <class T, class U>	// create template with required parameters
T add(T a, U b) {			// create class with the template and its parameters
	return (a + b);
}

template <class T, class U>
T sub(T a, U b) {
	return (a - b);
}

template <class T, class U>
T mul(T a, U b) {
	return (a * b);
}

template <class T, class U>
T div(T a, U b) {
	return (a / b);
}

int main() {
	int num1 = 5;
	double num2 = 45.9;

	cout << add(num1, num2) << endl;	// call the class using any combination of datatypes; int, double, float, etc.
	cout << sub(num1, num2) << endl;	// will recevice errors with datatypes that do not match
	cout << mul(num1, num2) << endl;	// such as char, string with num, double... etc
	cout << div(num1, num2) << endl;

	system("pause");
	return 0;
}