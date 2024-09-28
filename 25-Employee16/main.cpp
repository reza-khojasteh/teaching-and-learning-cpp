#include <iostream>
using namespace std;

#include "Employee16.h"
using namespace seneca;

int main() {
	// We create two identical Employee objects and then, we compare them using the helper function,
	// And finally, we add 10 hours to the first employee and save the result in the second employee.
	Employee employee1(123456789, "John", "Doe", 40), employee2(123456789, "John", "Doe", 40);

	if (employee1 == employee2)
		cout << "The two employees are the same." << endl;
	else
		cout << "The two employees are different." << endl;

	// Now, let's add 10 hours to the first employee and save the result in the second employee.
	employee2 = employee1 + 10;

	if (employee1 == employee2)
		cout << "The two employees are the same." << endl;
	else
		cout << "The two employees are different." << endl;

	return 0;
}