#include <iostream>
using namespace std;

#include "Employee25.h"
using namespace seneca;

// A polymorphic function that can accept any object of the base class or its derived classes:
void display(const Employee& emp) {
	emp.print(cout);
}

int main() {
	// A polymorphic object is one that can change its dynamic type throughout its lifetime.
	// It can be in any ways we can utilize an address of a base class object (like using a pointer or a reference).
	// Let's start by creating a pointer to the base class:
	Employee* ptr = nullptr;

	// This pointer can point to the base class object:
	ptr = new Employee(123, "Jane", "Doe");
	display(*ptr);
	delete ptr;

	// Later on, this pointer can point to the derived class object:
	ptr = new HourlyBasedEmployee(456, "John", "Doe", 43.5, 50.0);
	display(*ptr);
	delete ptr;

	return 0;
}