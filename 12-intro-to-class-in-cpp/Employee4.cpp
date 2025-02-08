#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
using namespace std;
#include <cstring>

#include "Employee4.h"

namespace seneca {
	void Employee::set(long id, const char* fName, const char* lName) {
		m_ID = id;
		strcpy(m_fName, fName);
		strcpy(m_lName, lName);
	}

	void Employee::print() const {
		cout << endl << "Employee ID: " << m_ID << endl
			<< "Employee Name: " << m_fName << " " << m_lName << endl;
	}

	void printEmployee(const Employee& emp) {
		// We can't access the private members of the Employee object directly, like:
		//cout << endl << "Employee ID: " << emp.m_ID << endl
		//	<< "Employee Name: " << emp.m_fName << " " << emp.m_lName << endl;
		// But we can access them through the public member functions (interfaces), like:
		emp.print();
	}

	void setEmployee(Employee& emp, long id, const char* fName, const char* lName) {
		emp.set(id, fName, lName);
	}
}