/*
* Name:       Amarjit Singh
*
* Course:     Personal Re-Learn of C++ - Project 08e
*
* Date:       08/12/2016
*
* Filename:   OperatorOVRLD.cpp
*
* Purpose:    Operator overloading
*
*/

#include "MathOper.h"
#include <iostream>
using namespace std;

int main() {
	int num1, num2;
	char op;

	cout << "What is num1: ";	// ask user
	cin >> num1;
	cout << "What is num2: ";
	cin >> num2;

	cout << "What operation would you like to do ";
	cin >> op;

	if (op == '+') {
		MathOper obj1(num1), obj2(num2);	// overload the operation
		MathOper res = obj1 + obj2;

		cout << res.var;

	}
	else if (op == '-') {
		MathOper obj1(num1), obj2(num2);
		MathOper res = obj1 - obj2;

		cout << res.var;

	}
	else if (op == '*') {
		MathOper obj1(num1), obj2(num2);
		MathOper res = obj1 * obj2;

		cout << res.var;

	}
	else if (op == '/') {
		MathOper obj1(num1), obj2(num2);
		MathOper res = obj1 / obj2;

		cout << res.var;

	}
	else {
		cout << "error!!!";
	}


	cout << endl;
	system("pause");
	return 0;
}