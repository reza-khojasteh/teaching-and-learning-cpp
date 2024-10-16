#include <iostream>
using namespace std;

#include "Employee19.h"
using namespace seneca;

int main() {
	// Let's first create two Employee objects
	Employee employee1, employee2;
	// And now let's read the data for those objects
	cin >> employee1 >> employee2;
	// And now let's print the data for them
	cout << employee1 << employee2;

	return 0;
}