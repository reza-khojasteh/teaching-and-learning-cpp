#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
using namespace std;
#include <cstring>

#include "Employee7.h"

namespace seneca {
	Employee::Employee() {
		m_ID = 0;
		m_fName[0] = '\0';
		m_lName[0] = '\0';
		// Just for logging/tracing purposes, we can print a message to the console
		cout << endl << "Employee object with ID: " << m_ID << " is created.";
	}

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

	// A new setter function to demonstrate another use case of 'this' pointer
	// This function will set the values of the instance variables of the current object
	// using the values entered by the user
	void Employee::set()
	{
		cout << endl << endl 
			<< "Testing the use of 'this' pointer in a setter function..." << endl;
		cout << "Enter the employee ID: " << endl;
		cin >> m_ID;
		cout << "Enter the employee first name: " << endl;
		cin >> m_fName;
		cout << "Enter the employee last name: " << endl;
		cin >> m_lName;
		// A temporary object to hold the values of the instance variables
		Employee temp(m_ID, m_fName, m_lName);
		// Check if the current object is empty or not 
		// (leaves the current object unchanged if the temporary object is empty)
		// Also note that since the temporary object(temp) 
		// and the current object are instances of the same class, 
		// this member function can access each object's instance variables directly.
		if (temp.m_ID == 0 && temp.m_fName[0] == '\0' && temp.m_lName[0] == '\0')
			// To copy the values of the instance variables of one object 
			// into those of the current object, we dereference *this 
			// as the left operand in an assignment expression...
			*this = temp;
	}

	// Just a bit of change in the print function to return a copy of the object
	Employee Employee::print() const {
		if (m_ID == 0 && m_fName[0] == '\0' && m_lName[0] == '\0')
			cout << endl << "Employee object is empty" << endl;

		cout << endl << "Employee ID: " << m_ID << endl
			<< "Employee Name: " << m_fName << " " << m_lName << endl;

		// Return a copy of the object
		return *this;
	}

	// Just a bit of change in the print function to return a const reference to the object
	//const Employee& Employee::print() const {
	//	if (m_ID == 0 && m_fName[0] == '\0' && m_lName[0] == '\0')
	//		cout << endl << "Employee object is empty" << endl;

	//	cout << endl << "Employee ID: " << m_ID << endl
	//		<< "Employee Name: " << m_fName << " " << m_lName << endl;

	//	// Return a reference to the object
	//	return *this;
	//}

	// And a bit of change in the destructor to print an endl at the end...
	Employee::~Employee() {
		// Just for logging/tracing purposes, we can print a message to the console
		cout << endl << "Employee object with ID: " << m_ID << " is destroyed." << endl;
	}
}