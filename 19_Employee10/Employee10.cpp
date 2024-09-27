#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
using namespace std;
#include <cstring>

#include "Employee10.h"

namespace seneca {
	Employee::Employee() {
		m_ID = 0;
		m_fName[0] = '\0';
		m_lName[0] = '\0';
		m_noOfHoursWorked = 0;
	}

	Employee::Employee(long id, const char* fName, const char* lName, int noOfHoursWorked) {
		m_ID = id;
		strcpy(m_fName, fName);
		strcpy(m_lName, lName);
		m_noOfHoursWorked = noOfHoursWorked;
	}

	void Employee::set(long id, const char* fName, const char* lName, int noOfHoursWorked) {
		m_ID = id;
		strcpy(m_fName, fName);
		strcpy(m_lName, lName);
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

	Employee& Employee::operator+=(int hours) {
		m_noOfHoursWorked += hours;

		return *this;
	}

	// Overload the ++ operator as a prefix operator
	Employee& Employee::operator++() {
		// Increment the number of hours worked by 1
		++m_noOfHoursWorked;
		// Return a reference to the object after the incrementation and changing the state
		return *this;
	}

	// Overload the ++ operator as a postfix operator
	Employee Employee::operator++(int) {
		// Create a copy of the object before the incrementation
		Employee copy = *this;
		// Increment the number of hours worked by 1
		++m_noOfHoursWorked;
		// OR ++(*this).m_noOfHoursWorked;
		// OR this->operator++();
		// OR ++this->m_noOfHoursWorked;
		// OR this->m_noOfHoursWorked++;
		// OR just simply call the prefix operator as:
		// ++(*this);
		// Return the copy of the object before the incrementation
		return copy;
	}
}