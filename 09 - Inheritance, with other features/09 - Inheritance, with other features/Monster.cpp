/*
* Name:       Amarjit Singh
*
* Course:     Personal Re-Learn of C++ - Project 09
*
* Date:       08/12/2016
*
* Filename:   Monster.cpp
*
* Purpose:    Inheritance practice with other features that require Inheritance
*				features include: Inheritance, Protected Members, Derived Class Constructor(Destructor), Polymorphism, and Virtual Functions
*/
#include "Monster.h"	// header for this class
#include <iostream>
using namespace std;


void Monster::attack() {	//function for this class
	cout << "Monster! - " << attackPower << endl;
}
