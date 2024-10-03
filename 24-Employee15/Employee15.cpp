#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
using namespace std;
#include <cstring>

#include "Employee15.h"

namespace seneca {
	Employee::Employee() {
		//m_ID = 0;
		//m_fName[0] = '\0';
		//m_lName[0] = '\0';
		//m_noOfHoursWorked = 0;
		// OR instead we can use the 4-args constructor like:
		*this = Employee(0, "", "", 0);
		// This is called "Localizing Constructor Logic" and it is a good practice.
		// We can use temporary objects to access validation logic localized within one
		// constructor which uses temporary object assignments to the current object (*this)
	}

	// A cast operator overload
	Employee::Employee(long id) {
		//m_ID = id;
		//m_fName[0] = '\0';
		//m_lName[0] = '\0';
		//m_noOfHoursWorked = 0;
		// OR instead we can use the 4-args constructor like:
		*this = Employee(id, "", "", 0);
		// (with the same description as above...) 
	}

	Employee::Employee(long id, const char* fName, const char* lName, int noOfHoursWorked) {
		m_ID = id;
		strcpy(m_fName, fName);
		strcpy(m_lName, lName);
		m_noOfHoursWorked = noOfHoursWorked;
	}

	Employee& Employee::set(long id, const char* fName, const char* lName, int noOfHoursWorked) {
		m_ID = id;
		strcpy(m_fName, fName);
		strcpy(m_lName, lName);
		m_noOfHoursWorked = noOfHoursWorked;
		return *this;
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

	Employee& Employee::operator++() {
		++m_noOfHoursWorked;
		return *this;
	}

	Employee Employee::operator++(int) {
		Employee copy = *this;
		++m_noOfHoursWorked;
		return copy;
	}

	Employee::operator bool() const {
		return m_ID != 0 && m_fName[0] != '\0' && m_lName[0] != '\0' && m_noOfHoursWorked != 0;
	}

	// A helper operator overload
	bool operator==(const Employee& emp1, const Employee& emp2) {
		return emp1.getID() == emp2.getID() && strcmp(emp1.getFName(), emp2.getFName()) == 0 &&
			strcmp(emp1.getLName(), emp2.getLName()) == 0 && emp1.getNoOfHoursWorked() == emp2.getNoOfHoursWorked();
	}

	// Another helper operator overload
	// For simplicity, we are not checking for negative hours or overflow.
	Employee operator+(const Employee& emp1, int hours) {
		// 1. Create a copy of the first operand
		Employee copy = emp1;
		// 2. Add the hours to the copy using the += operator on the copy
		copy += hours;
		// 3. Return the updated copy (not the original object)
		return copy;
	}

	// For symmetry, we overload the addition operator for identical operand types but in reverse order.
	Employee operator+(int hours, const Employee& emp1) {
		// We can use the first operator+ overload and then return the result.
		return emp1 + hours;
	}
}