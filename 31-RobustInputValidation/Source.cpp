// getPositiveInteger extracts a positive integer <= max
// from standard input and returns its value
#include <iostream>
using namespace std;
// In the following function, we do "robust input validation".
// Robust input validation rejects invalid input and out-of-bound values, 
// resetting any failed state and requesting fresh input as necessary from the user.
// This enables the function to return a valid value to the caller.
int getPositiveInteger(int max) {
	// The value to be returned
	int value;
	// A flag to control the loop
	bool keepreading;
	// Initially, keepreading is true
	keepreading = true;
	// The loop continues until a valid input is entered
	do {
		cout << "Enter a positive integer (<= " << max << ") : ";
		cin >> value;
		// Check for invalid character
		if (cin.fail()) {
			cerr << "Invalid character! Try Again..." << endl;
			// Clear the error flag
			cin.clear();
			// Clear the input buffer
			cin.ignore(2000, '\n');
		}
		// Check for invalid range
		else if (value <= 0 || value > max) {
			// Print the corresponding error message
			cerr << value << " is outside the range [1," <<
				max << ']' << endl;
			cerr << "Invalid input! Try Again..." << endl;
			// Clear the input buffer
			cin.ignore(2000, '\n');
		}
		// You may choose to omit this branch
		else if (char(cin.get()) != '\n') {
			cerr << "Trailing characters! Try Again..." << endl;
			// Clear the input buffer
			cin.ignore(2000, '\n');
		}
		// If the input is valid, keepreading is set to false and we exit the loop
		else
			keepreading = false;
	} while (keepreading);
	// Return the exoected value
	return value;
}
// Now, we test the function...
int main() {
	int max = 100;
	int value = getPositiveInteger(max);
	cout << "The value entered is " << value << endl;
	return 0;
}