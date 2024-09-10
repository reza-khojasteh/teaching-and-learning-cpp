// A simple program to do a modular example
// Transaction.h

// a structure to represent a transaction
struct Transaction {
    int acct;      // account number
    char type;     // credit 'c' debit 'd'
    double amount; // transaction amount
};
// function prototypes
void enter(Transaction*);
void display(const Transaction*);