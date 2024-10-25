#include <iostream>
using namespace std;

#include "Employee21.h"
using namespace seneca;

int main() {
	Employee base;
	HourlyBasedEmployee derived;

	base.read(cin);
	// The following can't be done this time, because of print being protected in the base:
	// base.print(cout);

	cout << endl;

	derived.read(cin);
	// But the following is ok, because print has been overridden in the derived class:
	derived.print(cout);	

	cout << endl;

	// We can also say:
	derived.setHourlyRate(50).setNoOfHorsWorked(40);
	cout << derived.getHourlyRate() << " " << derived.getNoOfHorsWorked();
	// But it's obvious we can't do the above for the base (because these are specific to the derived!)

	return 0;
}