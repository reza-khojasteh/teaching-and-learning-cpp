#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
using namespace std;
#include <cstring>

#include "Employee17.h"

namespace seneca {
	Employee::Employee() {
		*this = Employee(0, "", "", 0, nullptr);
	}

	// A cast operator overload
	Employee::Employee(long id) {
		 *this = Employee(id, "", "", 0, nullptr);
	}

	Employee::Employee(long id, const char* fName, const char* lName, int noOfDaysWorked, int* noOfHoursWorkedPerDay) {
		m_ID = id;
		strcpy(m_fName, fName);
		strcpy(m_lName, lName);
		m_noOfDaysWorked = noOfDaysWorked;
		m_noOfHoursWorkedPerDay = new int[m_noOfDaysWorked];
		for (int i = 0; i < m_noOfDaysWorked; i++)
			m_noOfHoursWorkedPerDay[i] = noOfHoursWorkedPerDay[i];
	}
	
	// The copy constructor contains the logic for copying from a source object to a newly created object of the same type.
	// The copy constructor is called when a new object is created and initialized with an existing object.
	// The copy constructor is called when an object is passed by value to a function.
	// The copy constructor is called when an object is returned by value from a function.
	Employee::Employee(const Employee& src) {
		// Shallow copies
		m_ID = src.m_ID;
		strcpy(m_fName, src.m_fName);
		strcpy(m_lName, src.m_lName);
		m_noOfDaysWorked = src.m_noOfDaysWorked;
		// Deep copies
		if (src.m_noOfHoursWorkedPerDay != nullptr) {
			m_noOfHoursWorkedPerDay = new int[m_noOfDaysWorked];
			for (int i = 0; i < m_noOfDaysWorked; i++)
				m_noOfHoursWorkedPerDay[i] = src.m_noOfHoursWorkedPerDay[i];
		}
		else
			m_noOfHoursWorkedPerDay = nullptr;
	}

	const Employee& Employee::print() const {
		if (m_ID == 0 && m_fName[0] == '\0' && m_lName[0] == '\0' && m_noOfDaysWorked == 0 && m_noOfHoursWorkedPerDay == nullptr)
			cout << endl << "Employee object is empty" << endl;
		else
			cout << endl << "Employee ID: " << m_ID << endl
			<< "Employee Name: " << m_fName << " " << m_lName << endl
			<< "Has worked for " << m_noOfDaysWorked << " days" << endl
			<< "Hours worked per day: ";
		for (int i = 0; i < m_noOfDaysWorked; i++)
			cout << m_noOfHoursWorkedPerDay[i] << " ";
		cout << endl;

		return *this;
	}

	// The assignment operator overload contains the logic for copying from a source object to a destination object of the same type.
	// The assignment operator overload is called when an object is assigned to another object.
	// The assignment operator overload is called when an object is passed by reference to a function.
	// The assignment operator overload is called when an object is returned by reference from a function.
	Employee& Employee::operator=(const Employee& src) {
		// 1. check for self-assignment (and NOTHING else) to avoid things like:
		// Employee employee1;
		// employee1 = employee1;
		if (this != &src) {
			// 2. clean up (deallocate previously allocated dynamic memory)
			delete[] m_noOfHoursWorkedPerDay;

			// 3. shallow copy (copy non-resource variables)
			m_ID = src.m_ID;
			strcpy(m_fName, src.m_fName);
			strcpy(m_lName, src.m_lName);
			m_noOfDaysWorked = src.m_noOfDaysWorked;

			// 4. deep copy (copy the resource)
			if (src.m_noOfHoursWorkedPerDay != nullptr) {
				// 4.1 allocate new dynamic memory, if needed
				m_noOfHoursWorkedPerDay = new int[m_noOfDaysWorked];
				// 4.2 copy the resource data
				for (int i = 0; i < m_noOfDaysWorked; i++)
					m_noOfHoursWorkedPerDay[i] = src.m_noOfHoursWorkedPerDay[i];
			}
			else
				m_noOfHoursWorkedPerDay = nullptr;
		}

		return *this;
	}

	Employee::~Employee() {
		delete[] m_noOfHoursWorkedPerDay;
	}
}