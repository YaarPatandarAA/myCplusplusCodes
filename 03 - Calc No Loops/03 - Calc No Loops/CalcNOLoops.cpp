/*
* Name:       Amarjit Singh
*
* Course:     Personal Re-Learn of C++ - Project 03
*
* Date:       07/06/2016
*
* Filename:   CalcNOLoops.cpp
*
* Purpose:    Basic user input and math arithmatic being done adn then redisplayed to user.
*
*/

#include <iostream>
#include <string>

using namespace std;

int main() {

	// declare needed datatypes
	double num1, num2, result;
	string str1, str2, str3, str4;

	// initialize datatypes
	str1 = "The Added numbers are: ";
	str2 = "The Subtracted numbers are: ";
	str3 = "The Multiplied numbers are: ";
	str4 = "The Divided numbers are: ";

//====================================================================================================

	// explaining to user what is happening
	cout << "We will be calculating two numbers that will add, subtract, multiply, and divide.\n"
		<< "For this we will need you to give us two numbers to work with.\n\n"

		<< "What is the first number: ";
	cin >> num1; // input of first number
	cout << "What is the second number: ";
	cin >> num2; // input of second number

	cout << "The given numbers are " << num1 << " and " << num2 << ", the math is as follows.\n\n"; // display back numbers

//=====================================================================================================

	result = num1 + num2; // add
	cout << str1 << result << endl; // display add

	result = num1 - num2; // subtract
	cout << str2 << result << endl; // display subtract

	result = num1 * num2; // multiply
	cout << str3 << result << endl; // display multiply

	result = num1 / num2; // divide
	cout << str4 << result << endl; // display divide

	// note how the result datatype was re-used.

	system("pause");
	return 0;
}