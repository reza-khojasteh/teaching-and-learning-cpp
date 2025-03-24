#include "Employee.h"
using namespace seneca;

int main() {
	// Create two Employee objects and display their information
	Employee employee1;
	setEmployee(&employee1, 123456789, "John", "Doe");
	printEmployee(&employee1);

	Employee employee2;
	setEmployee(&employee2, 987654321, "Jane", "Doe");
	printEmployee(&employee2);

	return 0;
}