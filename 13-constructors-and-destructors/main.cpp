#include "Employee5.h"
using namespace seneca;

int main() {
	// Create two Employee objects and display their information, this time using the constructors to initialize the objects
	Employee employee1 = Employee(123456789, "John", "Doe");
	employee1.print();
	// Note that you can still use the set function to change the values of the members of the object, later in the program
	//employee1.set(123456789, "John", "Doe");
	//employee1.print();

	Employee employee2 = Employee();
	// OR you can only say: Employee employee2;
	employee2.print();
	employee2.set(987654321, "Jane", "Doe");
	employee2.print();

	// Note that the destructors are called automatically when the objects go out of scope.
	// Also note that the destructors are called in the reverse order of the constructors.
	return 0;
}