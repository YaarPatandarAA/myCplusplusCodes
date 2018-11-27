/*
* Name:       Amarjit Singh
*
* Course:     Personal Re-Learn of C++ - Project 09
*
* Date:       08/12/2016
*
* Filename:   Enemy.cpp
*
* Purpose:    Inheritance practice with other features that require Inheritance
*				features include: Inheritance, Protected Members, Derived Class Constructor(Destructor), Polymorphism, and Virtual Functions
*/
#include "Enemy.h"	// Header for this class instructions
#include <iostream>
using namespace std;

void Enemy::setAttackPower(int a) {	// class function creation
	attackPower = a;
}

/*
function instructions if no pure function, also see header for protoype

void Enemy::attack(){
	cout << "I am the Enemy Attack" << endl;
}
*/

Enemy::Enemy(){
	cout << "I am the Constructor for the Base Class" << endl;
}

