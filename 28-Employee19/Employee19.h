#ifndef SENECA_EMPLOYEE1_H_
#define SENECA_EMPLOYEE1_H_
#include <iostream>
namespace seneca {
	class Employee {
	private:
		long m_ID{};
		char m_fName[41]{};
		char m_lName[41]{};
	public:
		// Constructors (incuding a cast operator; the second one.)
		Employee();
		Employee(long);
		Employee(long, const char*, const char*);
		// Getter/query/accessor function (we are adding std::ostream& as a parameter)
		const Employee& print(std::ostream&) const;
		// Setter/mutator function
		Employee& read(std::istream&);
	};
	// Helper functions
	std::istream& operator>>(std::istream&, Employee&);
	std::ostream& operator<<(std::ostream&, const Employee&);
}
#endif // !SENECA_EMPLOYEE1_H_