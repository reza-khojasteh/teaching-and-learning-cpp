#include <iostream>
using namespace std;

#include "Employee22.h"
using namespace seneca;

int main() {
	// Note the order in which the constructors and destructors are called in the output
	// First, comment all the following statements except the following to see the run.
	//HourlyBasedEmployee derived;
	// Can you explain/justify what you see?
	// Now, comment out the above lines and continue with the next two lines
	HourlyBasedEmployee derived(2, "John", "Doe", 43.5, 50.0);
	derived.print(cout);
	// Can you explain/justify what you see?
	
	// Finally, can you explain/justify what you see as the outcome of next statement?
	cout << derived;
	
	return 0;
}