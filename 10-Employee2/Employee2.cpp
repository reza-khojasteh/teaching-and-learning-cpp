#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
using namespace std;
#include <cstring>

#include "Employee2.h"

namespace seneca {
	// Function definitions has also changed accordingly.
	// The first parameter is not needed anymore, 
	// and the function name has changed to reflect the new structure 
	// (using the scope resolution operator)
	void Employee::set(long id, const char* fName, const char* lName) {
		// Now, instead of saying employee->m_ID, we can just say m_ID
		m_ID = id;
		// The other way to access the members is to use the this pointer
		// this->m_ID = id;

		// The same happens with the other members
		strcpy(m_fName, fName);
		strcpy(m_lName, lName);
	}

	// And the same happens with the print function
	// Note the const keyword at the end of the function prototype
	void Employee::print() const {
		cout << endl << "Employee ID: " << m_ID << endl
			<< "Employee Name: " << m_fName << " " << m_lName << endl;
	}
}