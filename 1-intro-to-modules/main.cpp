// A simple program to do a modular example
// main.cpp

#include "main.h"
#include "Transaction.h"

int main() {
    int i;
	Transaction tr;// Or struct Transaction tr; as you did in C
	// loop to enter and display transactions
    for (i = 0; i < NO_TRANSACTIONS; i++) {
        enter(&tr);
        display(&tr);
    }
}