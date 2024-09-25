#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
using namespace std;
#include <cstring>

#include "Employee12.h"

namespace seneca {
	Employee::Employee() {
		m_ID = 0;
		m_fName[0] = '\0';
		m_lName[0] = '\0';
		m_noOfHoursWorked = 0;
	}

	// A cast operator overload
	Employee::Employee(long id) {
		m_ID = id;
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

		cout << endl << "Employee ID: " << m_ID << endl
			<< "Employee Name: " << m_fName << " " << m_lName << endl
			<< "Has worked for " << m_noOfHoursWorked << " hours." << endl;

		return *this;
	}

	Employee& Employee::operator+=(int hours) {
		m_noOfHoursWorked += hours;

		return *this;
	}

	Employee& Employee::operator++() {
		++m_noOfHoursWorked;
		return *this;
	}

	Employee Employee::operator++(int) {
		Employee copy = *this;
		++m_noOfHoursWorked;
		return copy;
	}

	// A type conversion operator overload: operator bool() const;
	Employee::operator bool() const {
		return m_ID != 0 && m_fName[0] != '\0' && m_lName[0] != '\0' && m_noOfHoursWorked != 0;
	}
}