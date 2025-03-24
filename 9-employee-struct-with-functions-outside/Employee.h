#ifndef SENECA_EMPLOYEE_H_
#define SENECA_EMPLOYEE_H_
namespace seneca {
	// Employee structure
	struct Employee {
		long m_ID{};
		char m_fName[41]{};
		char m_lName[41]{};
	};
	// Function prototypes
	void setEmployee(Employee*, long, const char*, const char*);
	void printEmployee(const Employee*);
}
#endif // !SENECA_EMPLOYEE_H_