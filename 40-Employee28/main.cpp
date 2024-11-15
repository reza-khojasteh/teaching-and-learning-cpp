#include <iostream>
using namespace std;

#include "Employee28.h"
using namespace seneca;

int main() {
	// Let's first create an Employee object with the following data:
	Employee employee1(123, "John", "Doe");
	// And an HourlyBasedEmployee object with the following data:
	int* hours = new int[5] { 1, 2, 3, 4, 5 };
	HourlyBasedEmployee employee2(456, "Jane", "Doe", 5, hours);

	// Let's print them:
	employee1.print();
	employee2.print();

	// Now, let's create a second HourlyBasedEmployee object and copy the first object into it.
	HourlyBasedEmployee employee3 = employee2; // calls copy constructor
	employee3.print();

	HourlyBasedEmployee employee4; // calls default/no-arg constructor
	employee4 = employee3; // calls copy assignment operator
	employee4.print();

	return 0;
}