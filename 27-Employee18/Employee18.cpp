#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
using namespace std;
#include <cstring>

#include "Employee18.h"

namespace seneca {
	Employee::Employee() {
		*this = Employee(0, "", "");
	}

	// A cast operator overload
	Employee::Employee(long id) {
		*this = Employee(id, "", "");
	}

	Employee::Employee(long id, const char* fName, const char* lName) {
		m_ID = id;
		strcpy(m_fName, fName);
		strcpy(m_lName, lName);
	}

	const Employee& Employee::print(ostream& os) const {
		if (m_ID == 0 && m_fName[0] == '\0' && m_lName[0] == '\0')
			os << endl << "Employee object is empty" << endl;
		else {
			os.setf(ios::fixed);
			os.widen(10);

			os << endl << "Employee ID: " << m_ID << endl
			<< "Employee Name: " << m_fName << " " << m_lName << endl;

			os.unsetf(ios::fixed);
		}

		return *this;
	}
}