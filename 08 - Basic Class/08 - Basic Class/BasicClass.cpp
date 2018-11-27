/*
* Name:       Amarjit Singh
*
* Course:     Personal Re-Learn of C++ - Project 08
*
* Date:       08/07/2016
*
* Filename:   BasicClass.cpp
*
* Purpose:    Using Class and Objects, basic.
*/

#include<iostream>

using namespace std;

class basicClass {	// create the class
private:	// private member, anything below only accessible to this class
	int num1, num2;
public:		// public member, everthing below accessible from anywhere
	void setNum1(int x){	// setter
		num1 = x;
	}
	int getNum1() {			// getter
		return num1;
	}
	void setNum2(int y) {
		num2 = y;
	}
	int getNum2() {
		return num2;
	}
};

int addition(int A, int B) { // function for addtion, NOT NEEDED just used in this program
	return A + B;
}

int main() {
	int num1, num2;

	basicClass obj; // create a object of the class
	
	cout << "What is first number: "; // ask user
	cin >> num1;
	cout << "What is second number: ";
	cin >> num2;

	obj.setNum1(num1); // send value to setter
	obj.setNum2(num2);

	cout << addition(obj.getNum1(), obj.getNum2()) << endl; // recive value from getter, then send to function

	system("pause");
	return 0;
}