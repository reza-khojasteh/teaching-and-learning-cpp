#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
using namespace std;
#include <cstring>

#include "Employee28.h"

namespace seneca {
	Employee::Employee() {
		*this = Employee(0, "", "");
	}

	Employee::Employee(long id, const char* fName, const char* lName) {
		m_ID = id;
		strcpy(m_fName, fName);
		strcpy(m_lName, lName);
	}

	const Employee& Employee::print() const {
		if (m_ID == 0 && m_fName[0] == '\0' && m_lName[0] == '\0')
			cout << endl << "Employee object is empty" << endl;
		else
			cout << endl << "Employee ID: " << m_ID << endl
			<< "Employee Name: " << m_fName << " " << m_lName << endl;

		return *this;
	}

	HourlyBasedEmployee::HourlyBasedEmployee() {
		*this = HourlyBasedEmployee(0, "", "", 0, nullptr);
	}

	HourlyBasedEmployee::HourlyBasedEmployee(long id, const char* fName, const char* lName,
		int noOfDaysWorked, int* noOfHoursWorkedPerDay) : Employee(id, fName, lName) {
		m_noOfDaysWorked = noOfDaysWorked;
		m_noOfHoursWorkedPerDay = new int[m_noOfDaysWorked];
		for (int i = 0; i < m_noOfDaysWorked; i++)
			m_noOfHoursWorkedPerDay[i] = noOfHoursWorkedPerDay[i];
	}

	const HourlyBasedEmployee& HourlyBasedEmployee::print() const {
		Employee::print();

		if (m_noOfDaysWorked == 0 || m_noOfHoursWorkedPerDay == nullptr)
			cout << "Has not worked this month.";
		else {
			cout << "Has worked for " << m_noOfDaysWorked << " days" << endl
				<< "Hours worked per day: ";
			for (int i = 0; i < m_noOfDaysWorked; i++)
				cout << m_noOfHoursWorkedPerDay[i] << " ";
		}
		cout << endl;

		return *this;
	}

	// The copy constructor contains the logic for copying from a source object to a newly created object of the same type.
	// The copy constructor is called when a new object is created and initialized with an existing object.
	// The copy constructor is called when an object is passed by value to a function.
	// The copy constructor is called when an object is returned by value from a function.
	// The copy constructor of a derived class calls a constructor of the base class.
	// By default, that constructor is the default/no-argument constructor.
	// To override this default, we explicitly call the base class constructor of our choice.
	// The default copy constructor for the base class (if you don't provide one) performs a shallow copy.
	// Here, the copy constructor for the derived class calls the base class's (default) copy constructor,
	// and then performs the deep copies (needed here because of the DMA), itself :
	HourlyBasedEmployee::HourlyBasedEmployee(const HourlyBasedEmployee& src) : Employee(src) {
		// Shallow copies (remained which should be done here in the derived class):
		m_noOfDaysWorked = src.m_noOfDaysWorked;
		// Deep copies:
		if (src.m_noOfHoursWorkedPerDay != nullptr) {
			m_noOfHoursWorkedPerDay = new int[m_noOfDaysWorked];
			for (int i = 0; i < m_noOfDaysWorked; i++)
				m_noOfHoursWorkedPerDay[i] = src.m_noOfHoursWorkedPerDay[i];
		}
		else
			m_noOfHoursWorkedPerDay = nullptr;
	}


	// The assignment operator overload contains the logic for copying from a source object to a destination object of the same type.
	// The assignment operator overload is called when an object is assigned to another object.
	// The assignment operator overload is called when an object is passed by reference to a function.
	// The assignment operator overload is called when an object is returned by reference from a function.
	// The default copy assignment operator of a derived class calls the copy assignment operator of its base class.
	// However, any custom copy assignment operator of a derived class DOES NOT by default call the copy assignment operator
	// of its base class. Accordingly, a custom copy assignment operator of a derived class with a resource
	// requires an explicit call to the base class copy assignment operator.
	// We call the base class copy assignment operator from within the body of the definition of the derived class 
	// assignment operator. The call takes either the "functional form" or the "cast assignment form".
	HourlyBasedEmployee& HourlyBasedEmployee::operator=(const HourlyBasedEmployee& src) {
		// 1. check for self-assignment (and NOTHING else) to avoid things like:
		// Employee employee1;
		// employee1 = employee1;
		if (this != &src) {
			// 2. clean up (deallocate previously allocated dynamic memory)
			delete[] m_noOfHoursWorkedPerDay;

			// 3. shallow copy (copy non-resource variables)
			// calling the base class copy assignment operator using either:
			/*Employee::operator=(src);*/ //functional expression
			// or:
			(Employee&)*this = src; // assignment expression

			// And then, doing the derived class part:
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

	HourlyBasedEmployee::~HourlyBasedEmployee() {
		delete[] m_noOfHoursWorkedPerDay;
	}
}