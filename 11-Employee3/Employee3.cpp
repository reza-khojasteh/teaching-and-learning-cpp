#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
using namespace std;
#include <cstring>

#include "Employee3.h"

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
}