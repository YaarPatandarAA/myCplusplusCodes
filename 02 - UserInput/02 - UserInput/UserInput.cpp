/*
* Name:       Amarjit Singh
*
* Course:     Personal Re-Learn of C++ - Project 02
*
* Date:       07/06/2016
*
* Filename:   UserInput.cpp
*
* Purpose:    To lean user input ways of c++ and how to do them.
*			 learned how to use a userinout for a string and how a string is used in c++.
*/

#include <iostream>
#include <string>

using namespace std;

int main() {

	// decalre datatypes
	string teststring;
	string fName, lName;
	double num1, num2;

	//initialaze any needed datatypes
	teststring = "What is your name: ";

//============================================================================================

	cout << "Please give me 2 numbers: "; // asking user
	cin >> num1 >> num2; // reciving user input, in one line for two inputs
	cout << "Your numbers are " << num1 << " and " << num2 << endl; // display back recived input

//=============================================================================================

	cout << teststring;
	getline(cin, fName);
	getline(cin, lName);
	cout << "Hello, " << fName << lName << ", nice to meet you. \n";

//=============================================================================================

	system("pause");
	return 0;
}