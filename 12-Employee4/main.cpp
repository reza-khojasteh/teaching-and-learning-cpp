#include "Employee4.h"
using namespace seneca;

int main() {
	// Create two Employee objects and display their information
	Employee employee1;
	employee1.set(123456789, "John", "Doe");
	employee1.print();

	Employee employee2;
	employee2.set(987654321, "Jane", "Doe");
	employee2.print();

	// Call the printEmployee function to display the information of the employee1 object
	printEmployee(employee1);

	return 0;
}