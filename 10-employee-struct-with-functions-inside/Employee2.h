#ifndef SENECA_EMPLOYEE_H_
#define SENECA_EMPLOYEE_H_
namespace seneca {
	// Employee structure
	struct Employee {
		long m_ID{};
		char m_fName[41]{};
		char m_lName[41]{};
		// Function prototypes
		void set(long, const char*, const char*);
		void print() const;
	};

	// Function prototypes moved up; no need to declare them here!
	// Also, their first parameter is not needed anymore, and their name has changed.
	
	//void setEmployee(Employee*, long, const char*, const char*);
	//void printEmployee(const Employee*);
}
#endif // !SENECA_EMPLOYEE_H_