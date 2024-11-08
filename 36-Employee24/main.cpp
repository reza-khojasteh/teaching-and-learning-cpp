#include <iostream>
using namespace std;

#include "Employee24.h"
using namespace seneca;

// Now, let's define a (kind of) global function 
// that will be able to display the passed object (as a reference) to the output stream
// Note that the parameter is a reference to the an object of type Employee (the base class)
void display(const Employee& emp) {
	// This time, the print method will be called dynamically, at run time.
	// Actually, based on the dynamic type referenced by the parameter (which the executable code binds at run time),
	// the most derived version of the member function "print" will be called!
	emp.print(cout);
	// Note that if needed, you can do early binding by calling the base class's print method as:
	// emp.Employee::print(cout);
}

int main() {
	// First, let's create an object of the base class and an object of the derived class
	Employee base(123, "Jane", "Doe");
	HourlyBasedEmployee derived(456, "John", "Doe", 43.5, 50.0);

	base.print(cout);
	// The following call to "print" shadows the base class's print method.
    // This is also called "overriding".
	derived.print(cout);
	// And this time, in the next two statements, as opposed to the previous example,
	// dynamic dispatch will happen (not the early binding).
	// This means that the first "print" method that will be called is the base class's "print" method,
	display(base);
	// And the second "print" method that will be called is the derived class's "print" method.
	display(derived);

	return 0;
}