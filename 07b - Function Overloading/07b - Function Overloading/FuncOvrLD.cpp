/*
* Name:       Amarjit Singh
*
* Course:     Personal Re-Learn of C++ - Project 07a
*
* Date:       08/06/2016
*
* Filename:   FuncOvrLD.cpp
*
* Purpose:    Playing around and understanding function over loading
*/

#include<iostream>

using namespace std;

//function prototypes
int add(int a, int b);			// similar names but different datatypes
double add(double a, double b);	// *note: issues when using default arguments

int main() {
	// datat decleration and initilization
	int num1 = 25, num2 = 4;
	double num3 = 25.6, num4 = 4.5;

	cout << "int " << add(num1,num2) << endl; // calling the same add function
	cout << "double " << add(num3,num4) << endl; // c++ smart to differ from which datat ypes are passed

	system("pause");
	return 0;
}

// functions
int add(int a, int b) { // similar names and function but different datatypes
	return a+b;
}

double add(double a, double b) {
	return a+b;
}