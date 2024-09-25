#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
using namespace std;
#include <cstring>

#include "Employee6.h"

namespace seneca {
	Employee::Employee() {
		// 'this' is a pointer to the object that is being created
		// We can use 'this' to access the members of the object (not necessary in this case)
		this->m_ID = 0; // Or (*this).m_ID = 0;
		this->m_fName[0] = '\0';
		this->m_lName[0] = '\0';
		// Just for logging/tracing purposes, we can print a message to the console
		cout << endl << "Employee object with ID: " << this->m_ID << " is created.";
	}

	Employee::Employee(long id, const char* fName, const char* lName) {
		// We can use 'this' to access the members of the object (not necessary in this case)
		this->m_ID = id;
		strcpy(this->m_fName, fName);
		strcpy(this->m_lName, lName);
		// Just for logging/tracing purposes, we can print a message to the console
		cout << endl << "Employee object with ID: " << this->m_ID << " is created.";
	}

	void Employee::set(long id, const char* fName, const char* lName) {
		// We can use 'this' to access the members of the object (not necessary in this case)
		this->m_ID = id;
		strcpy(this->m_fName, fName);
		strcpy(this->m_lName, lName);
	}

	void Employee::print() const {
		// Validation checking in the print function to avoid printing an empty object
		// We can use 'this' to access the members of the object (not necessary in this case)
		if (this->m_ID == 0 && this->m_fName[0] == '\0' && this->m_lName[0] == '\0') {
			cout << endl << "Employee object is empty" << endl;
			return;
		}
		// else, print the object
		cout << endl << "Employee ID: " << m_ID << endl
			<< "Employee Name: " << this->m_fName << " " << this->m_lName << endl;
	}

	Employee::~Employee() {
		// Just for logging/tracing purposes, we can print a message to the console
		// We can use 'this' to access the members of the object (not necessary in this case)
		cout << endl << "Employee object with ID: " << this->m_ID << " is destroyed.";
	}
}