/*
* Name:       Amarjit Singh
*
* Course:     Personal Re-Learn of C++ - Project 09
*
* Date:       08/12/2016
*
* Filename:   Ninja.h
*
* Purpose:    Inheritance practice with other features that require Inheritance
*				features include: Inheritance, Protected Members, Derived Class Constructor(Destructor), Polymorphism, and Virtual Functions
*/
#pragma once
#include "Enemy.h"	// header to use variable from Base Class
class Ninja : public Enemy	// extend to base class
{
public:
	void attack();	// function prototype
};

