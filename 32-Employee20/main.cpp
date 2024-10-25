#include <iostream>
using namespace std;

#include "Employee20.h"
using namespace seneca;

int main() {
	// Let's create a base Employee object
	Employee base;
	// And now, let's create a derived HourlyBasedEmployee object
	HourlyBasedEmployee derived;

	// Now, we can say:
	base.read(cin);
	base.print(cout);

	cout << endl;

	// And we can say the same for the derived!
	// The reason is any derived obj. "is a" base obj (because of inheritance!)
	derived.read(cin);
	derived.print(cout);	

	return 0;
}