#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
using namespace std;
#include <cstring>

#include "Employee6.h"

namespace seneca {
	Employee::Employee(/*Employee* this*/) {
		// 'this' is a pointer to the current object.
		// We can use 'this' to access the members of the object (not necessary in this case)
		this->m_ID = 0; // OR (*this).m_ID = 0; OR m_ID = 0;
		this->m_fName[0] = '\0';
		this->m_lName[0] = '\0';
		// Just for logging/tracing purposes, we can print a message to the console
		cout << endl << "Employee object with ID: " << this->m_ID << " is created.";
	}

	Employee::Employee(/*Employee* this, */long id, const char* fName, const char* lName) {
		// We can use 'this' to access the members of the object (not necessary in this case)
		this->m_ID = id;
		strcpy(this->m_fName, fName);
		strcpy(this->m_lName, lName);
		// Just for logging/tracing purposes, we can print a message to the console
		cout << endl << "Employee object with ID: " << this->m_ID << " is created.";
	}

	void Employee::set(/*Employee* this, */long id, const char* fName, const char* lName) {
		// We can use 'this' to access the members of the object (not necessary in this case)
		this->m_ID = id;
		strcpy(this->m_fName, fName);
		strcpy(this->m_lName, lName);
	}

	// Note that it will be mandatory to use 'this' if we had (wrongly) named our paramaters as:
	//void Employee::set(/*Employee* this, */long m_ID, const char* m_fName, const char* m_lName) {
	//	// We can use 'this' to access the members of the object (not necessary in this case)
	//	this->m_ID = m_ID;
	//	strcpy(this->m_fName, m_fName);
	//	strcpy(this->m_lName, m_lName);
	//}

	void Employee::print(/*Employee* this*/) const {
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

	Employee::~Employee(/*Employee* this*/) {
		// Just for logging/tracing purposes, we can print a message to the console
		// We can use 'this' to access the members of the object (not necessary in this case)
		cout << endl << "Employee object with ID: " << this->m_ID << " is destroyed.";
	}
}