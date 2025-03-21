#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
using namespace std;
#include <cstring>

#include "Employee5.h"

namespace seneca {
	// The following (no-argument) constructor initializes the members of the class to an empty state
	// If we don't declare a constructor in the class definition, 
	// the compiler inserts a default no-argument constructor with an empty body 
	// which leaves the instance variables uninitialized!
	// Note that if our class has the prototype for a constructor with some parameters 
	// but does not include the prototype for a no-argument (default) constructor, 
	// the compiler does not add an empty body, no-argument (default) constructor.
	// The compiler only inserts such thing if the class has not declared any constructors.
	Employee::Employee() {
		m_ID = 0;
		m_fName[0] = '\0';
		m_lName[0] = '\0';
		// Just for logging/tracing purposes, we can print a message to the console
		cout << endl << "Employee object with ID: " << m_ID << " is created.";
	}

	// The following constructor initializes the members of the class to the values passed as arguments
	Employee::Employee(long id, const char* fName, const char* lName) {
		m_ID = id;
		strcpy(m_fName, fName);
		strcpy(m_lName, lName);
		// Just for logging/tracing purposes, we can print a message to the console
		cout << endl << "Employee object with ID: " << m_ID << " is created.";
	}

	void Employee::set(long id, const char* fName, const char* lName) {
		m_ID = id;
		strcpy(m_fName, fName);
		strcpy(m_lName, lName);
	}

	void Employee::print() const {
		// Now, we can add validation to the print function to avoid printing an empty object
		if (m_ID == 0 && m_fName[0] == '\0' && m_lName[0] == '\0') {
			cout << endl << "Employee object is empty" << endl;
			return;
		}
		// Print the information of the employee
		cout << endl << "Employee ID: " << m_ID << endl
			<< "Employee Name: " << m_fName << " " << m_lName << endl;
	}

	// The following destructor is called when the object goes out of scope
	// The destructor is called automatically when the object goes out of scope
	// If we don't declare a destructor in the class definition, 
	// the compiler inserts a destructor with an empty body!
	Employee::~Employee() {
		// Just for logging/tracing purposes, we can print a message to the console
		cout << endl << "Employee object with ID: " << m_ID << " is destroyed.";
	}
}