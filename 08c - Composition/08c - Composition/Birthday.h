/*
* Name:       Amarjit Singh
*
* Course:     Personal Re-Learn of C++ - Project 08c
*
* Date:       08/12/2016
*
* Filename:   Birthday.h
*
* Purpose:    Learn Composition
*/

#pragma once
class Birthday	// crreate class
{
public:
	Birthday(int m, int d, int y);	// constructor prototype
	void printDay();	// function prototype
private:
	int Month, day, year;
};

