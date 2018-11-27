/*
* Name:       Amarjit Singh
*
* Course:     Personal Re-Learn of C++ - Project 08c
*
* Date:       08/12/2016
*
* Filename:   MainComp.cpp
*
* Purpose:    Learn Composition
*/

#include <iostream>
#include "Birthday.h"	// header files from the other classes
#include "Person.h"

using namespace std;

int main() {

	Birthday birthObj(10,18,1994);			// create object and pass vaules for on class
	Person personObj("Amarjit", birthObj);	// creat object and pass values, notice prevous object passed

	personObj.printInfo();	// call function of class

	system("pause");
	return 0;
}