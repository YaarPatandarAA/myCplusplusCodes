/*
* Name:       Amarjit Singh
*
* Course:     Personal Re-Learn of C++ - Project 08e
*
* Date:       08/12/2016
*
* Filename:   MathOper.cpp
*
* Purpose:    Operator overloading
*
*/

#include "MathOper.h"
#include <iostream>

using namespace std;

MathOper::MathOper()	// constructor
{
}

MathOper::MathOper(int a)	// value constructor
	: var(a)
{
}

MathOper MathOper::operator+(MathOper &obj) {	// operator overloading
	MathOper res;
	res.var = this->var + obj.var;
	return res;
}

MathOper MathOper::operator-(MathOper &obj) {
	MathOper res;
	res.var = this->var - obj.var;
	return res;
}

MathOper MathOper::operator*(MathOper &obj) {
	MathOper res;
	res.var = this->var * obj.var;
	return res;
}

MathOper MathOper::operator/(MathOper &obj) {
	MathOper res;
	res.var = this->var / obj.var;
	return res;
}