/*
* Name:       Amarjit Singh
*
* Course:     Personal Re-Learn of C++ - Project 08c
*
* Date:       08/12/2016
*
* Filename:   Person.cpp
*
* Purpose:    Learn Composition
*/

#include "Person.h"		// include all these headers for this class
#include "Birthday.h"	// needed as Birthday class is used in this class
#include <iostream>
#include <string>

using namespace std;

Person::Person(string n, Birthday dob)	// person class constructor
	: name(n),
	DateOfBirth(dob)	// memeber initilization
{
}

void Person::printInfo() {	// print function for this class, shows values of this class and calls the print function of other class
	cout << name << " birthday is on ";
		DateOfBirth.printDay();
}

