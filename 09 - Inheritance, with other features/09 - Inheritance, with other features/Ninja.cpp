/*
* Name:       Amarjit Singh
*
* Course:     Personal Re-Learn of C++ - Project 09
*
* Date:       08/12/2016
*
* Filename:   Ninja.cpp
*
* Purpose:    Inheritance practice with other features that require Inheritance
*				features include: Inheritance, Protected Members, Derived Class Constructor(Destructor), Polymorphism, and Virtual Functions
*/
#include "Ninja.h"	// Header for this class instructions
#include <iostream>
using namespace std;


void Ninja::attack() { //function for this class
	cout << "Ninja! - " << attackPower << endl;
}
