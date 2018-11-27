/*
* Name:       Amarjit Singh
*
* Course:     Personal Re-Learn of C++ - Project 05
*
* Date:       07/09/2016
*
* Filename:   Switches.cpp
*
* Purpose:    Calculator, with Switches.
*
*/

#include <iostream>
#include <string>

using namespace std;

int main() {

	// declare needed datatypes
	double num1, num2, result;
	char math, ans;
	string str1, str2, str3, str4;
	string ans_Full;

	// initialize datatypes
	str1 = "The Added numbers are: ";
	str2 = "The Subtracted numbers are: ";
	str3 = "The Multiplied numbers are: ";
	str4 = "The Divided numbers are: ";

	//====================================================================================================

	do {
		cout << "What is the first number: ";
		cin >> num1; // input of first number

		cout << "What operation would you like to do? (+ - * /): ";
		cin >> math; // input of operation

		switch (math) { // start of switch
			case '+':
				cout << "What is the second number: ";
				cin >> num2; // input of second number
				result = num1 + num2; // add
				cout << str1 << result << endl; // display add
				break;
			case '-':
				cout << "What is the second number: ";
				cin >> num2; // input of second number
				result = num1 - num2; // subtract
				cout << str2 << result << endl; // display subtract
				break;
			case '*':
				cout << "What is the second number: ";
				cin >> num2; // input of second number
				result = num1 * num2; // multiply
				cout << str3 << result << endl; // display multiply
				break;
			case '/':
				cout << "What is the second number: ";
				cin >> num2; // input of second number
				result = num1 / num2; // divide
				cout << str4 << result << endl; // display divide
				break;
			default:
				cout << "ERROR!!! \n"; // if user input invalid
		}

		cout << "Another One??? "; // if want to re run calc
		cin >> ans;
	} while ((ans == 'y') || (ans == 'Y'));

	// note how the result datatype was re-used.

	system("pause");
	return 0;
}