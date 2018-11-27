/*
* Name:       Amarjit Singh
*
* Course:     Personal Re-Learn of C++ - Project 12
*
* Date:       08/13/2016
*
* Filename:   MainFiles.cpp
*
* Purpose:    Learn Files, fstream
*
*/

#include <iostream>
#include <fstream>	// include fstream header to work with files
#include <string>	// include string header to read back from file
using namespace std;

int main() {
	ofstream MyFile1("test.txt");	// create the ofstream object, this will create the file and give ability to write to it.

	if (MyFile1.is_open()) {		// .is_open will check is file is truely open
		MyFile1 << "This is awesome! \n";	// write to the file
	}
	else {
		cout << "Something went wrong";
	}
	MyFile1.close();				// close file to clear computer memory

//=============================================================================================================================================

	string line;					// needed to read from file
		
	ifstream MyFile("test.txt");	// create the fstream object, this will open the file and read from it.

	while (getline(MyFile, line)) {	// using this while loop we will read from the file one char at a time.
		cout << line << '\n';
	}
	MyFile.close();					// close file to clear computer memory

	system("pause");
	return 0;
}