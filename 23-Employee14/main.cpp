#include <iostream>
using namespace std;

#include "Employee14.h"
using namespace seneca;

int main() {
	// We create two identical Employee objects and then, we compare them using the helper function.
	Employee employee1(123456789, "John", "Doe", 40), employee2(123456789, "John", "Doe", 40);

	if (areTheSame(employee1, employee2))
		cout << "The two employees are the same." << endl;
	else
		cout << "The two employees are different." << endl;

	return 0;
}