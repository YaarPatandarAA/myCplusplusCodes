/*
* Name:       Amarjit Singh
*
* Course:     Personal Re-Learn of C++ - Project 10a
*
* Date:       08/12/2016
*
* Filename:   Main.cpp
*
* Purpose:    Learn aboue class templeates
*
*/

#include <iostream>
using namespace std;

template <class T>	//create template for this class
class Pair {		//create class
private:			// declare variables using template
	T first, second;	
public:
	Pair(T a, T b)	// class constructor
		: first(a), 
		second(b) //member initilizer list
	{ }	
	T bigger();	// function prototype
};

template <class T>	// create template once again
T Pair<T>::bigger() {	// declare function, note how declaration is made
	return (first>second ? first : second);
}

int main()
{
	Pair <double> obj(23.43, 5.68);	// create object, notice how object is made
	cout << obj.bigger() << endl;	// call function of object

	system("pause");
	return 0;
}
