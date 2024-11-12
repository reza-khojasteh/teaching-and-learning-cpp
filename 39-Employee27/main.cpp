#include <iostream>
using namespace std;

#include "Employee27.h"
using namespace seneca;

int main() {
	// Now, we can do a true polymorphism!
	// First, let's declare an array of pointers of type interface
	iEmployee* employees[2];

	// Then, let's assign any one of its elements to a concrete Employee object
	employees[0] = new HourlyBasedEmployee(123, "John", "Doe", 40.0, 50.0);
	employees[1] = new SalaryBasedEmployee(456, "Jane", "Doe", 3000.0);

	// As a result of polymorphism, we can have the following loop work correctly, 
	// based on different dynamic types at run-time!
	for (int i = 0; i < 2; i++)
	{
		// This gives you the polymorphism power:
		employees[i]->print(cout);
		cout << "This employee gets a salary of $" << employees[i]->calculateSalary() << " this month." << endl;
	}

	// And now, you should delete the memory you had dynamically allocated:
	for (int i = 0; i < 2; i++)
		delete employees[i];

	return 0;
}