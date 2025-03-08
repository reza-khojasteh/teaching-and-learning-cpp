#include "Employee10.h"
using namespace seneca;

int main() {
	// Create two Employee objects and display their information...

	Employee employee1 = Employee(123456789, "John", "Doe", 12);
	employee1.print();
	// Add an hour to the number of hours worked by employee1
	// First increment using the prefix operator and then print
	(++employee1).print();// => employee1.operator++().print(); => operator++(employee1).print();
	// And then increment using the postfix operator and then print
	(employee1++).print();// => employee1.operator++(0).print(); => operator++(employee1, 0).print();
	// Print the object after the incrementation
	employee1.print();

	Employee employee2;
	employee2.set(987654321, "Jane", "Smith", 24);
	employee2.print();
	// Add two hours to the number of hours worked by employee2 and print after each addition
	// First increment using the prefix operator and then print
	(++employee2).print();
	(++employee2).print();
	// And then increment using the postfix operator and then print
	(employee2++).print();
	(employee2++).print();
	// Print the object after the incrementation
	employee2.print();

	return 0;
}