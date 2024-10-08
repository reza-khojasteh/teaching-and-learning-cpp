#include <iostream>
using namespace std;

#include "Employee18.h"
using namespace seneca;

int main() {
	// Let's first create an Employee object with the following data members:
	Employee employee1(123456789, "John", "Doe");
	
	// This time, we will use the print() function to display the data members of the object
	// and we have the option to display it in the standard output, standard error, or standard log.
	// The difference between the three is that the standard output is the default output stream,
	// the standard error is used to display error messages, and the standard log is used to display
	// log messages.
	employee1.print(cout);
	employee1.print(cerr);
	employee1.print(clog);

	// OR, as you know from before, you can also call them in a chain:
	//employee1.print(cout).print(cerr).print(clog);

	return 0;
}