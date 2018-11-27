/*
* Name:       Amarjit Singh
*
* Course:     Personal Re-Learn of C++ - Project 08c
*
* Date:       08/12/2016
*
* Filename:   Birthday.cpp
*
* Purpose:    Learn Composition
*/

#include "Birthday.h"	// header file for thsi class
#include <iostream>	// include to use Standar Library

using namespace std;

Birthday::Birthday(int m, int d, int y)	// constructor, sets values
	: Month(m),
	day(d),
	year(y)	// memeber initilization
{
}

void Birthday::printDay() {	// print function of this class, displays this class values
	cout << Month << "/" << day << "/" << year << endl;
}
