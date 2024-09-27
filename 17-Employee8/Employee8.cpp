#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
using namespace std;
#include <cstring>

#include "Employee8.h"

namespace seneca {
	Employee::Employee() {
		m_ID = 0;
		m_fName[0] = '\0';
		m_lName[0] = '\0';
		// Initialize the number of hours worked by the employee to 0
		// This is a new member variable added to the class
		m_noOfHoursWorked = 0;
	}

	Employee::Employee(long id, const char* fName, const char* lName, int noOfHoursWorked) {
		m_ID = id;
		strcpy(m_fName, fName);
		strcpy(m_lName, lName);
		// Initialize the number of hours worked by the employee to the value 
		// passed as an argument
		m_noOfHoursWorked = noOfHoursWorked;
	}

	void Employee::set(long id, const char* fName, const char* lName, int noOfHoursWorked) {
		m_ID = id;
		strcpy(m_fName, fName);
		strcpy(m_lName, lName);
		// Set the number of hours worked by the employee to the value
		// passed as an argument
		m_noOfHoursWorked = noOfHoursWorked;
	}

	const Employee& Employee::print() const {
		if (m_ID == 0 && m_fName[0] == '\0' && m_lName[0] == '\0' && m_noOfHoursWorked == 0)
			cout << endl << "Employee object is empty" << endl;
		else
			cout << endl << "Employee ID: " << m_ID << endl
			<< "Employee Name: " << m_fName << " " << m_lName << endl
			<< "Has worked for " << m_noOfHoursWorked << " hours." << endl;

		return *this;
	}

	// Overload the += operator for an int as the right operand
	Employee& Employee::operator+=(int hours) {
		// Add the hours to the number of hours worked by the employee
		m_noOfHoursWorked += hours;
		// Return a reference to the object
		return *this;
	}
}