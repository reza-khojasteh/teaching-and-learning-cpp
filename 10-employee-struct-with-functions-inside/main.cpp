#include "Employee2.h"
using namespace seneca;

int main() {
	// Create two Employee objects and display their information
	// This time, we call the member functions directly on the objects
	Employee employee1;
	employee1.set(123456789, "John", "Doe");
	employee1.print();

	Employee employee2;
	employee2.set(987654321, "Jane", "Doe");
	employee2.print();

	// It is now considered to be more OO but the problem is
	// that the structure is now exposed to the outside world
	// and the members can be accessed directly and this is not a good practice
	// because it breaks encapsulation.
	employee1.m_ID = 987654321;
	employee1.print();

	return 0;
}