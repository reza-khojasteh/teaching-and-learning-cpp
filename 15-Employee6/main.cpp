#include "Employee6.h"
using namespace seneca;

int main() {
	// Create two Employee objects and display their information...
	// This version is the same as Employee5, but with the use of "this" pointer in 
	// all the member functions of the class.
	Employee employee1 = Employee(123456789, "John", "Doe");
	employee1.print();

	Employee employee2 = Employee(); // OR Employee employee2;
	employee2.print();
	employee2.set(987654321, "Jane", "Doe");
	employee2.print();

	return 0;
}