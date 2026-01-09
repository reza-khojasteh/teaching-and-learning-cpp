// A simple program to do a modular example
// Transaction.cpp

#include <iostream> // for cout, cin
using namespace std;

#include "Transaction.h"  // for Transaction

/**
 * @brief Prompts for and accepts Transaction data.
 * 
 * This function prompts the user to enter the account number, account type (debit or credit), and account amount.
 * The entered data is stored in the provided Transaction structure.
 * 
 * @param tr A pointer to the Transaction structure to store the entered data.
 */
void enter(Transaction* tr) {
	// prompt for and accept the transaction data
    cout << "Enter the account number : ";
	cin >> tr->acct;// Or cin >> (*tr).acct;
    cout << "Enter the account type (d debit, c credit) : ";
    cin >> tr->type;
    cout << "Enter the account amount : ";
    cin >> tr->amount;
}

/**
 * @brief Displays the Transaction data.
 * 
 * This function displays the account number, account type (debit or credit), and account amount
 * of the provided Transaction structure.
 * 
 * @param tr A pointer to the Transaction structure containing the data to be displayed.
 */
void display(const Transaction* tr) {
	// display the transaction data
    cout << "Account " << tr->acct;
    cout << ((tr->type == 'd') ? " Debit $" : " Credit $") << tr->amount;
    cout << endl;
}