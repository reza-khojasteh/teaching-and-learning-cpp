#include <iostream>
using namespace std;

#include "Employee11.h"
using namespace seneca;

int main() {
	// Create one Employee objects and demonstrate the functionality of the type conversion operator...
	// 1. Create an Employee object without any data
	Employee employee1;

	if (employee1)
	{
		cout << "Employee object is in a valid state!" << endl;
	}
	else
	{
		cout << "Employee object is empty" << endl;
	}

	// 2. Create an Employee object with data
	employee1 = Employee(123456789, "John", "Doe", 12);

	if (employee1)
	{
		cout << "Employee object is in a valid state!" << endl;
	}
	else
	{
		cout << "Employee object is empty" << endl;
	}

	return 0;
}