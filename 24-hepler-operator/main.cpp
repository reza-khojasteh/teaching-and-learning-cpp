#include <iostream>
using namespace std;

#include "Employee15.h"
using namespace seneca;

int main() {
	// We create two identical Employee objects and then, we compare them using the helper function,
	// And finally, we add 10 hours to the first employee and save the result in the second employee.
	Employee employee1(123456789, "John", "Doe", 40), employee2(123456789, "John", "Doe", 40);

	if (employee1 == employee2)
		cout << "The two employees are the same." << endl;
	else
		cout << "The two employees are different." << endl;

	Employee employee3 = employee1 + 10;
	employee3.print();
	// Note that instead of the above two lines, you could have also said: (employee1 + 10).print();

	Employee employee4 = 10 + employee1;
	employee4.print();

	return 0;
}