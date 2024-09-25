#include "Employee9.h"
using namespace seneca;

int main() {
	// Create two Employee objects and display their information...

	Employee employee1 = Employee(123456789, "John", "Doe", 12);
	employee1.print();
	// Add an hour to the number of hours worked by employee1
	// The operator+= overload will be called
	// Note the way the operator is called: employee1.operator+=(1);
	// Parantheses are necessary because of the precedence of the operators
	(++employee1).print();

	Employee employee2;
	employee2.set(987654321, "Jane", "Smith", 24);
	employee2.print();
	// Add two hours to the number of hours worked by employee2 and print after each addition
	(++employee2).print();
	(++employee2).print();

	return 0;
}