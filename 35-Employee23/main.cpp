#include <iostream>
using namespace std;

#include "Employee23.h"
using namespace seneca;

// Now, let's define a (kind of) global function 
// that will be able to display the passed object (as a reference) to the output stream
// Note that the parameter is a reference to the an object of type Employee (the base class)
void display(const Employee& emp) {
	emp.print(cout);
}

int main() {
	// First, let's create an object of the base class and an object of the derived class
	Employee base(1, "Jane", "Doe");
	HourlyBasedEmployee derived(2, "John", "Doe", 43.5, 50.0);

	base.print(cout);
	// Shadowing the base class's print method
	derived.print(cout);
	// But here, shadowing does not happen!
	// Instead, early binding occurs (at compile time)...
	display(base);
	display(derived);

	return 0;
}