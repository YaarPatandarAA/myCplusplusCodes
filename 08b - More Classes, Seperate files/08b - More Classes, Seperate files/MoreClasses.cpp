/*
* Name:       Amarjit Singh
*
* Course:     Personal Re-Learn of C++ - Project 08b
*
* Date:       08/10/2016 edit 08/11/2016
*
* Filename:   MoreClasses.cpp
*
* Purpose:    Basic Classes in seperate files with: Destructor, Const Obj, Member Initilizers.
*/

#include "MyClass.h"
#include<iostream>

using namespace std;

int addition(int A, int B) { // function for addtion, NOT NEEDED just used in this program
	return A + B;
}

int main() {
	int num1, num2;

	cout << endl;
	cout << "What is first number: "; // ask user
	cin >> num1;
	cout << "What is second number: ";
	cin >> num2;
	cout << endl;

	MyClass obj(num1, num2);			// create an object of the class
	const MyClass cObji(num1, num2);	// create a constat object of the class

	obj.printMe();		// use the function of print for the object
	cObji.printConst();	// print using conctant object

	obj.setNum1(num1); // send value to setter
	obj.setNum2(num2);

	cout << endl << "The addition is : " << addition(obj.getNum1(), obj.getNum2()) << endl << endl; // recive value from getter, then send to function

	system("pause");
	return 0;
}