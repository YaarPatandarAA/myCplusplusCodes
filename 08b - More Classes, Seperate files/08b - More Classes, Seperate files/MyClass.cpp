/*
* Name:       Amarjit Singh
*
* Course:     Personal Re-Learn of C++ - Project 08b
*
* Date:       08/10/2016 edit 08/11/2016
*
* Filename:   MyClass.cpp
*
* Purpose:    Basic Classes in seperate files with: Destructor, Const Obj, Member Initilizers.
*/

#include "MyClass.h"
#include<iostream>

using namespace std;

MyClass::MyClass(int a, int b)
	: regVar(a), constVar(b) // memeber initalizer, used due to constant var
{
	cout << endl << "Constructor Start!!" << endl;
}

MyClass::~MyClass() // destructor
{
	cout << endl << "Destructor Start!!" << endl;
}

void MyClass::printMe() { // print function, used to show VARs
	cout << endl;
	cout << "Regular Varaibale: " << regVar << endl;
	cout << "Const Variable: " << constVar << endl;
	cout << endl;
}

void MyClass::printConst() const { // function used for constant object
	cout << endl <<  "Using a constant object" << endl;
}

void MyClass::setNum1(int x) {	// setter
	num1 = x;
}
int MyClass::getNum1() {			// getter
	return num1;
}
void MyClass::setNum2(int y) {
	num2 = y;
}
int MyClass::getNum2() {
	return num2;
}
