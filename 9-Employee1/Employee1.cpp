#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
using namespace std;
#include <cstring>

#include "Employee1.h"

namespace seneca {
	// Function definitions
	void setEmployee(Employee* employee, long id, const char* fName, const char* lName) {
		employee->m_ID = id;
		strcpy(employee->m_fName, fName);
		strcpy(employee->m_lName, lName);
	}

	void printEmployee(const Employee* employee) {
		cout << endl << "Employee ID: " << employee->m_ID << endl
			<< "Employee Name: " << employee->m_fName << " " << employee->m_lName << endl;
	}
}