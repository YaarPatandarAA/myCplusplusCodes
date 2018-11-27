/*
* Name:       Amarjit Singh
*
* Course:     Personal Re-Learn of C++ - Project 08a
*
* Date:       08/08/2016 edit 08/10/2016
*
* Filename:   BankSystem.cpp
*
* Purpose:    Create a basic banking system that will use knowledge of classes
				privte variable will be needed
*/

#include<iostream>
#include<string>
#include <cstdlib>

using namespace std;

// Create Class
class bankSystem{
private: // add private variables
	int acctNum, amtAcct, dAmt, wAmt;
	string acctName;
public: // add public variables
	void setName(string x) { // setter
		acctName = x;
	}
	string getName() { // getter
		return acctName;
	}
	void setAcctNum(int x) {
		acctNum = x;
	}
	int getAcctNum() {
		return acctNum;
	}
	void setAmtAcct(int y) {
		amtAcct = y;
	}
	int getAmtAcct() {
		return amtAcct;
	}
	void setDpstAmt(int m) { // deposit amount setter, notice no getter
		dAmt = m;
		amtAcct += dAmt;
	}
	void setWithAmt(int w) { // withdraw amount setter, notice no getter
		wAmt = w;
		amtAcct -= wAmt;
	}
};

int main() {

	// data declerations
	string name;
	int number, value, n, actNum, amt;
	char option;
	bool ans, menuAns;
	bankSystem obj[100];

	do { // loop for creating accounts
		cout << "Enter number of Accounts you want to create: ";
		cin >> n; //ask for array size

		if (n > 100) { // if accounts exceed amount
			cout << "Error!!! Please keep accounts under 100." << endl << endl;;
			ans = false;
		}
		else { // create the accounts
			ans = true;
			for (int i = 0; i < n; i++) // loop for multiple accounts
			{
				cout << "What is the name of the Account " << i+1 << ": ";
				cin >> name;
				obj[i].setName(name);
				cout << "Please input an account number for " << obj[i].getName() << ": ";
				cin >> number;
				obj[i].setAcctNum(number);
				cout << "What is the amount in the account: $";
				cin >> value;
				obj[i].setAmtAcct(value);
				cout << endl;
			}

			system("CLS"); // clear screen
			cout << "AcctNumber -- Name -- Amount" << endl; // show created accounts
			for (int i = 0; i < n; i++)
				cout << "   " << obj[i].getAcctNum() << "        " << obj[i].getName() << "      $" << obj[i].getAmtAcct() << endl;
		}
		system("pause");
	} while (ans == false); // end account creation loop

	do { // loop for menu of bank
		system("CLS");
		cout << "1. View Account" << endl;
		cout << "2. Deposit to account" << endl;
		cout << "3. Withdraw from account" << endl;
		cout << "4. Quit" << endl << endl; // view this menu to user

		cout << "What would you like to do: ";
		cin >> option; // take in option for menu

		switch (option) // switch statement for usage of menu
		{
		case '1':
			cout << "Enter account number to view: ";
			cin >> actNum;

			for (int i = 0; i < n; i++) { // loop will check account number against array of objetcs
				if (actNum == obj[i].getAcctNum()) {

					system("CLS");

					cout << "AcctNumber -- Name -- Amount" << endl;
					cout << "   " << obj[i].getAcctNum() << "        " << obj[i].getName() << "      $" << obj[i].getAmtAcct() << endl;

					i = n + 1; // end loop once found
				}
			}
			system("pause");
			menuAns = false;
			break;
		case '2':
			cout << "Enter account number to deposit to: ";
			cin >> actNum;

			for (int i = 0; i < n; i++) {
				if (actNum == obj[i].getAcctNum()) {

					system("CLS");

					cout << "AcctNumber -- Name -- Amount" << endl; // view inital account details
					cout << "   " << obj[i].getAcctNum() << "        " << obj[i].getName() << "      $" << obj[i].getAmtAcct() << endl << endl;

					cout << "Enter amount to deposit: ";
					cin >> amt;
					obj[i].setDpstAmt(amt); // call deposit setter
					cout << endl;
					cout << "New amount in account is: " << obj[i].getAmtAcct() << endl; // view new amount

					i = n + 1;
				}
			}

			system("pause");
			menuAns = false;
			break;
		case '3':
			cout << "Enter account number to withdraw from: ";
			cin >> actNum;

			for (int i = 0; i < n; i++) {
				if (actNum == obj[i].getAcctNum()) {

					system("CLS");

					cout << "AcctNumber -- Name -- Amount" << endl;
					cout << "   " << obj[i].getAcctNum() << "        " << obj[i].getName() << "      $" << obj[i].getAmtAcct() << endl;

					cout << "Enter amount to withdraw: ";
					cin >> amt;
					obj[i].setWithAmt(amt); // call withdraw setter
					cout << endl;
					cout << "New amount in account is: " << obj[i].getAmtAcct() << endl;

					i = n + 1;
				}
			}
			system("pause");
			menuAns = false;
			break;
		case '4':
			menuAns = true; // quit option
			break;
		default: // if invalid option entered
			menuAns = false;
			cout << "Incorrect option, ";
			system("pause");
			break;
		}
	} while (menuAns == false); // end loop for menu

	return 0;
}
