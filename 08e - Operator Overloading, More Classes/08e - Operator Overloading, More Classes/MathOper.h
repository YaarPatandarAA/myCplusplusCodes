/*
* Name:       Amarjit Singh
*
* Course:     Personal Re-Learn of C++ - Project 08e
*
* Date:       08/12/2016
*
* Filename:   MathOper.h
*
* Purpose:    Operator overloading
*
*/

#pragma once
class MathOper // create class
{
public:
	int var;	// var for overloaded operator
	MathOper();	// basic constructor
	MathOper(int a);	// value constructor
	MathOper operator+(MathOper &obj);	// operator overloading oprototypes
	MathOper operator-(MathOper &obj);
	MathOper operator*(MathOper &obj);
	MathOper operator/(MathOper &obj);
};

