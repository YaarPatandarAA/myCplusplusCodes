/*
* Name:       Amarjit Singh
*
* Course:     Personal Re-Learn of C++ - Project 06
*
* Date:       07/30/2016
*
* Filename:   ArrySwap.cpp
*
* Purpose:    learn how to use arrays in c++, task to swap first and last value of array.
*/

#include <iostream>

using namespace std;

int main() {

	int arr[5]; // array decleration

	for (int a = 0; a < 5; a++) { // loop to initilize array
		int temp; // temp value to store user input

		cout << "Give me a Number: ";
		cin >> temp; // ask user

		arr[a] = temp; // put value into specific slot of array
	}

	for (int i = 0; i < 5; i++) { // display array
	
		cout << "\n" << arr[i];
	}

	int temp; //temp value for swaping array values

	temp = arr[0]; // store first value in temp

	arr[0] = arr[4]; // store last value in first value for array

	arr[4] = temp; // put temp, which is first value fo array, into last value of array

	cout << endl; // space for display

	for (int i = 0; i < 5; i++) { // display array

		cout << "\n" << arr[i];
	}

	cout << endl << endl; // space for display
	system("pause");
	return 0;
}