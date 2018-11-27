/*
* Name:       Amarjit Singh
*
* Course:     Personal Re-Learn of C++ - Project 05
*
* Date:       07/10/2016
*
* Filename:   F to C Converter.cpp
*
* Purpose:    Accept temperature in Farenheit and print it in Centigrade.
*
*/
#include <iostream>

using namespace std;

int main() {

	char tempType; // character datatype
	double tempInput, ans; // datat types to store temperature

	cout << "What is the current temperature type (F/C): ";
	cin >> tempType; // ask for type of temp

	cout << "What is the numeric temperature value to comvert: ";
	cin >> tempInput; // ask user for temp value

	switch (tempType) {
		case 'F':
		case 'f':	// use fall thorugh feature to use 2 different case
			ans = (((tempInput - 32) * 5) / 9); // formula for converion
			cout << "Fahrenheit(" << tempInput << "°) to Celsius is: " << ans << endl; // display convertion
			break;
		case 'C':
		case 'c':
			ans = ((tempInput * 9) / 5) + 32; // formula for convertion, calculations
			cout << "Celsius(" << tempInput << "°) to Fahrenheit is: " << ans << endl; // display to user
			break;
		default: //default case for error
			cout << "Error!!!";
	}

	system("pause");
	return 0;
}