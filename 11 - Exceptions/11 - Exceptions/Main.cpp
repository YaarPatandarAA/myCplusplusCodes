/*
* Name:       Amarjit Singh
*
* Course:     Personal Re-Learn of C++ - Project 11
*
* Date:       08/13/2016
*
* Filename:   Main.cpp
*
* Purpose:    Learn Exceptions, Try/Catch block with throw
*
*/

#include <iostream>
using namespace std;

int main() {
	try {	// start try block
		int num1;
		cout << "Enter the first number:";
		cin >> num1;

		int num2;
		cout << "Enter the second number:";
		cin >> num2;

		if (num2 == 0) {
			throw 0;	// create a anexception to throw
		}

		cout << "Result:" << num1 / num2 << endl;
	}	// end try block
	catch (int x) {	// catch the thrown exception. start catch block
		cout << "Division by zero!" << endl;	// display exception
	}	// end catch block

	system("pause");
	return 0;
}