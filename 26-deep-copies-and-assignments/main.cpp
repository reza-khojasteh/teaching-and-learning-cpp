#include <iostream>
using namespace std;

#include "Employee17.h"
using namespace seneca;

int main() {
	// Let's first create an Employee object with the following data members:
	int* hours = new int[5] { 1, 2, 3, 4, 5 };
	Employee employee1(123456789, "John", "Doe", 5, hours);
	employee1.print();

	// Now, let's create a second Employee object and copy the first object into it.
	Employee employee2 = employee1;
	employee2.print();

	// Finally, let's create a third Employee object and assign the first object to it.
	Employee employee3;
	employee3 = employee1;
	employee3.print();

	return 0;
}