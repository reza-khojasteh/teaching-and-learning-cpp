#include <iostream>
using namespace std;

#include "Employee17.h"
using namespace seneca;

int main() {
	// Let's first create an Employee object with the following data members:
	int* hours = new int[5] { 1, 2, 3, 4, 5 };
	Employee employee1(123456789, "John", "Doe", 5, hours);
	employee1.print();

	// And now, let's create a second Employee object and copy the first object into it.
	Employee employee2 = employee1;
	employee2.print();

	return 0;
}