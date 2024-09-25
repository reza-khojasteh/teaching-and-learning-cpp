#include <iostream>
using namespace std;

#include "Employee13.h"
using namespace seneca;

int main() {
	// Same main function as in Employee12.cpp except that we are trying to see 
	// the "Localizing Constructor Logic" in action.
	Employee employee1(123456789), employee2;

	employee1.print();
	employee2 = (Employee)987654321;
	// Note again that we can also say:
	//employee2 = 987654321;
	employee2.print();

	return 0;
}