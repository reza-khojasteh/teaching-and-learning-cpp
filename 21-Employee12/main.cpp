#include <iostream>
using namespace std;

#include "Employee12.h"
using namespace seneca;

int main() {
	// Create one Employee objects and demonstrate the functionality of the cast operator overload...
	// First, create an Employee object using the overloaded constructor 
	// that takes a long value as an argument.
	// Then, create another Employee object using the default constructor.
	Employee employee1(123456789), employee2;

	employee1.print();
	// Now, use the cast operator overload to create an Employee object from a long value.
	// C++ compilers create temporary objects in a variety of situations.
	// A temporary object down there, "(Employee)987654321", has no name and is destroyed 
	// as the last step in evaluating the expression that contains its creation point.
	employee2 = (Employee)987654321;
	// We can also say:
	//employee2 = 987654321;
	// Doing this, the compiler inserts code that creates a temporary Employee object 
	// using the single-argument constructor and the assignment operator copies the temporary object
	// to employee2. At the end, the compiler inserts code that destroys the temporary object 
	// and removes that from memory.
	employee2.print();

	return 0;
}