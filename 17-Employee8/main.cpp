#include "Employee8.h"
using namespace seneca;

int main() {
	// Create two Employee objects and display their information...
	Employee employee1 = Employee(123456789, "John", "Doe", 12);
	employee1.print();
	// Add 8 hours to the number of hours worked by employee1
	employee1 += 8;
	employee1.print();

	Employee employee2;
	employee2.set(987654321, "Jane", "Smith", 24);
	employee2.print();
	// Add 16 hours to the number of hours worked by employee2
	employee2 += 16;
	employee2.print();

	return 0;
}