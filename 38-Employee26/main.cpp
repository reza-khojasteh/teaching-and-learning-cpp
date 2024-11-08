#include <iostream>
using namespace std;

#include "Employee26.h"
using namespace seneca;

int main() {
	// First, note that we can't create an object of the base class type this time as that is abstract!
	//Employee base(1, "Jane", "Doe");
	// But we can do the same with an object of the derived type like:
	HourlyBasedEmployee derived(2, "John", "Doe", 40.0, 50.0);

	// Not only that but also, we can print that object and even calculate its salary:
	derived.print(cout);
	cout << "This employee gets a salary of $" << derived.calculateSalary() << " this month." << endl;

	return 0;
}