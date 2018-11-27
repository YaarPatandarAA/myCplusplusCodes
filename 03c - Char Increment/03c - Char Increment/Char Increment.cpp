/*
* Name:       Amarjit Singh
*
* Course:     Personal Re-Learn of C++ - Project 03c
*
* Date:       07/10/2016
*
* Filename:   Char Increment.cpp
*
* Purpose:    Increments Char, this will make the next char come.
*
*/

#include<iostream>
using namespace std;

int main()
{
	char ch; // charter datatype
	cout << "Enter any character : "; 
	cin >> ch; // char input
	ch++; // increment char to get next char
	cout << "Next character is : " << ch << endl << endl;

	system("pause");
	return 0;
}