/*
* Name:       Amarjit Singh
*
* Course:     Personal Re-Learn of C++ - Project 07c
*
* Date:       08/06/2016
*
* Filename:   Recursion.cpp
*
* Purpose:    Learn about recursion, within functions.
*/

#include <iostream>

using namespace std;

int factorial(int n) { // create the function
	if (n == 1) { // base case, this will stop the recursion from forever running
		return 1; // different base case depends on what function does
	}
	else {
		return n * factorial(n - 1); // recursion call to the same function
	}
}
int main() {
	cout << factorial(5) << endl; // initial call to the function

	system("pause");
	return 0;
}