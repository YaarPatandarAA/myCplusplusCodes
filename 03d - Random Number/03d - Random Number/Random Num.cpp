/*
* Name:       Amarjit Singh
*
* Course:     Personal Re-Learn of C++ - Project 03d
*
* Date:       08/06/2016
*
* Filename:   Random Num.cpp
*
* Purpose:    Generate Random number between a range
*
*/

#include <iostream>
#include <cstdlib> // to use the random function
#include <ctime> // needed to include for time

using namespace std;

int main() {
	srand(time(0)); // initialize random seed:

	for (int x = 1; x <= 10; x++) {
		cout << 1 + (rand() % 6) << endl; // generate secret number between 1 to 6
	}


	system("pause");
	return 0;
}