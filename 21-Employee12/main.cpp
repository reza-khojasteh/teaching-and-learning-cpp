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
	employee2 = (Employee)987654321;
	employee2.print();

	return 0;
}