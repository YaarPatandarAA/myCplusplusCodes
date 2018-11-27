/*
* Name:       Amarjit Singh
*
* Course:     Personal Re-Learn of C++ - Project 06a
*
* Date:       07/30/2016
*
* Filename:   MaxMin.cpp
*
* Purpose:    Find Max and Min in array.
*/

#include <iostream>

using namespace std;

int main() {

	int Arr[100], n; // array delecartion and array size decleration

	cout << "Enter number of elements you want to insert ";
	cin >> n; //ask for array size

	for (int i = 0; i<n; i++)
	{
		cout << "Enter element " << i + 1 << ":";
		cin >> Arr[i]; // insert into array
	}

	for (int i = 0; i<n; i++)
		cout << Arr[i] << " "; // display array

	int max = 0; // max decleration
	for (int x = 0; x < n; x++)
	{
		if (Arr[x] > max)
			max = Arr[x]; // sort out and find max
	}

	int min = 0; // min decleration
	if (Arr[0] < Arr[1]) {
		min = Arr[0]; // find initial min
	}
	for (int x = 0; x < n; x++) {
		if (Arr[x] < min)
			min = Arr[x]; // sort out and find actual min
	}

	cout << endl; // space for display
	cout << "Max: " << max << endl; //display max
	cout << "Min: " << min << endl; //display min


	system("pause");
	return 0;
}