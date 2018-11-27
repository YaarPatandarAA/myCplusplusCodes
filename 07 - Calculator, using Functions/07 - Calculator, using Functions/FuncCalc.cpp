/*
* Name:       Amarjit Singh
*
* Course:     Personal Re-Learn of C++ - Project 07
*
* Date:       08/06/2016
*
* Filename:   FuncCalc.cpp
*
* Purpose:    Calculator aplication using Functions.
*/

#include <iostream>

using namespace std;

// function prototypes
int add(int x, int y);
int sub(int x, int y);
int mul(int x, int y);
int divide(int x, int y);

int main() {
	// data declerations
	char input;
	int num1, num2;

	cout << "What would you like to do + - * /  ";
	cin >> input; // ask user math option
	cout << "Number 1: ";
	cin >> num1; // ask user numbers
	cout << "Number 2: ";
	cin >> num2;

	switch (input) { // switch statement for type of math
		case '+':
			cout << add(num1, num2);
			break;
		case '-':
			cout << sub(num1, num2);
			break;
		case '*':
			cout << mul(num1, num2);
			break;
		case '/':
			if (num2 == 0) {
				cout << "Error!!!"; // didivde by zero check
			}
			else {
				cout << divide(num1, num2);
			}
			break;
		default:
			cout << "Error!!";
	}

	cout << endl << endl;
	system("pause");
	return 0;
}
	// functions created for the type of calculation
int add(int x, int y) {
	return (x + y); // return and do calculation
}
int sub(int x, int y) {
	return (x - y);
}
int mul(int x, int y) {
	return (x * y);
}
int divide(int x, int y) {
	return (x / y);
}