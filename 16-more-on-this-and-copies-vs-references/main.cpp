#include "Employee7.h"
using namespace seneca;

int main() {
	// Create three Employee objects and display their information...
	// This time, we have assigned the second object to the result of the print function!
	// Note how many times constructors and destructors are called in the output! 
	// (can you tell why?)
	Employee employee1 = Employee(123456789, "John", "Doe");
	employee1.print();

	Employee employee2;
	employee2.print();
	
	employee2 = employee1.print();
	employee2.print();

	Employee employee3;
	employee3.set();
	employee3.print();

	return 0;
}