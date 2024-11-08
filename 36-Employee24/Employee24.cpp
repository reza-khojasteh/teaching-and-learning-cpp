#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
using namespace std;
#include <cstring>

#include "Employee24.h"

namespace seneca {
	Employee::Employee(long id, const char* fName, const char* lName) {
		m_ID = id;
		strcpy(m_fName, fName);
		strcpy(m_lName, lName);
	}

	const Employee& Employee::print(ostream& os) const {
		if (m_ID == 0 && m_fName[0] == '\0' && m_lName[0] == '\0')
			os << endl << "Employee object is empty" << endl;
		else {
			os.setf(ios::fixed);
			os.widen(10);

			os << endl << "Employee ID: " << m_ID << endl
				<< "Employee Name: " << m_fName << " " << m_lName << endl;

			os.unsetf(ios::fixed);
		}

		return *this;
	}

	Employee& Employee::read(istream& is) {
		long id{}; // will hold the employee ID
		char fName[41]{}; // will hold the employee first name
		char lName[41]{}; // will hold the employee last name

		cout << "Enter Employee ID: ";
		// read the ID from the input buffer
		is >> m_ID;

		cout << "Enter Employee First Name: ";
		// read the first name from the input buffer
		is >> m_fName;

		cout << "Enter Employee Last Name: ";
		// read the last name from the input buffer
		is >> m_lName;

		// construct a temporary Student
		Employee temp(id, fName, lName);
		// if data is valid, the temporary object into the current object
		if (temp.m_ID != 0 && temp.m_fName[0] != '\0' && temp.m_lName[0] != '\0')
			*this = temp;

		return *this;
	}

	// This constructor calls the base class's constructor, 
	// and then, does the initializations for the specific parts
	HourlyBasedEmployee::HourlyBasedEmployee(long id, const char* fName, const char* lName, double noOfHoursWorked, double hourlyRate)
		// First, call the base class constructor by forwarding those arguments which could be passed there...
		: Employee(id, fName, lName) {
		// And then, initialize the specific/derived class data members directly here...
		// (this could also be considered as another use case of code reuse in inheritance!)
		setNoOfHorsWorked(noOfHoursWorked);
		setHourlyRate(hourlyRate);
	}

	// And now, the implementations for the derived class member functions:
	double HourlyBasedEmployee::getNoOfHorsWorked() const {
		return m_noOfHoursWorked;
	}

	double HourlyBasedEmployee::getHourlyRate() const {
		return m_hourlyRate;
	}

	HourlyBasedEmployee& HourlyBasedEmployee::setNoOfHorsWorked(double noOfHoursWorked) {
		m_noOfHoursWorked = noOfHoursWorked;
		return *this;
	}

	HourlyBasedEmployee& HourlyBasedEmployee::setHourlyRate(double hourlyRate) {
		m_hourlyRate = hourlyRate;
		return *this;
	}

	// We can have our derived print version call the base version, like this:
	const HourlyBasedEmployee& HourlyBasedEmployee::print(std::ostream& os) const {
		// Call the base class print verion (reuse that code!)
		Employee::print(os);

		// Print the specifics to the derived class's obj.
		os << "Employee Number Of Hours Worked: " << m_noOfHoursWorked << endl
			<< "Employee Hourly Rate: " << m_hourlyRate << endl;

		return *this;
	}
}