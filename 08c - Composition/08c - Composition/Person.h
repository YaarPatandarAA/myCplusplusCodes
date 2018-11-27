/*
* Name:       Amarjit Singh
*
* Course:     Personal Re-Learn of C++ - Project 08c
*
* Date:       08/12/2016
*
* Filename:   Person.h
*
* Purpose:    Learn Composition
*/

#pragma once
#include <string>	// string header needed anytime string datatype is needed
#include "Birthday.h"	// used due to the birthday class datatypes is used

using namespace std;

class Person
{
public:
	Person(string n, Birthday dob);	// prototypes
	void printInfo();
private:
	string name;
	Birthday DateOfBirth;
};

