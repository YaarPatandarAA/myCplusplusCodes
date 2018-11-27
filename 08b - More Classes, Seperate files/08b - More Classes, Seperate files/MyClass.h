/*
* Name:       Amarjit Singh
*
* Course:     Personal Re-Learn of C++ - Project 08b
*
* Date:       08/10/2016 edit 08/11/2016
*
* Filename:   MyClass.h
*
* Purpose:    Basic Classes in seperate files with: Destructor, Const Obj, Member Initilizers.
*/

#pragma once
class MyClass{	// create the class
private:	// private member, anything below only accessible to this class
	int num1, num2;
	int regVar; 
	const int constVar;	// constant variable
public:		// public member, everthing below accessible from anywhere
	MyClass(int a, int b); // class constructor used to inialize variables
	void printMe(); // print VARs using
	void printConst() const;	// function to test const obj 
	~MyClass(); // destructor prototype
	void setNum1(int x);	// setter prototype
	int getNum1();			// getter prototype
	void setNum2(int y);
	int getNum2();
};

