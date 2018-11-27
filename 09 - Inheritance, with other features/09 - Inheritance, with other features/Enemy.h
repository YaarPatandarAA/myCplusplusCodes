/*
* Name:       Amarjit Singh
*
* Course:     Personal Re-Learn of C++ - Project 09
*
* Date:       08/12/2016
*
* Filename:   Enemy.h
*
* Purpose:    Inheritance practice with other features that require Inheritance
*				features include: Inheritance, Protected Members, Derived Class Constructor(Destructor), Polymorphism, and Virtual Functions
*/
#pragma once	
class Enemy {	//create class
protected:
	int attackPower;	// variable for use with derived classes
public:
	Enemy();
	virtual void attack()=0; // pure virtual function, will require derived classes to provide their own instructions
	// virtual void attack();	if you want to have a default function, also see cpp for function instructions
	void setAttackPower(int a);	// function prototype
};

