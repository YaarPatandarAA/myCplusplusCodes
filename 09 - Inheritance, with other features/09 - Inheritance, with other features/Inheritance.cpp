/*
* Name:       Amarjit Singh
*
* Course:     Personal Re-Learn of C++ - Project 09
*
* Date:       08/12/2016
*
* Filename:   Inheritance.cpp
*
* Purpose:    Inheritance practice with other features that require Inheritance
*				features include: Inheritance, Protected Members, Derived Class Constructor(Destructor), Polymorphism, and Virtual Functions
*/
#include "Enemy.h"		// Include the Base class header
#include "Monster.h"	// include the dervived class headers
#include "Ninja.h"
#include <iostream>		// standard headers
using namespace std;

int main() {
	Ninja n;		//Create Derived Object
	Monster m;
	//Enemy e;  used if we want default enemy, cannot create if using pure virtual 

	Enemy *e1 = &n;	// pointer from Base Class to Derived Class
	Enemy *e2 = &m;
	//Enemy *e3 = &e; pointer to the defualt enemy obj

	e1->setAttackPower(20);	//Set value for derived class using pointer of Base CLass
	e2->setAttackPower(80);

	n.attack();	// class function from dervied class
	m.attack();
	//e.attack();	both these produce same result with different way, for the defualt enemy obj
	//e3->attack();

	system("pause");
	return 0;
}