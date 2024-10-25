#ifndef SENECA_EMPLOYEE1_H_
#define SENECA_EMPLOYEE1_H_
#include <iostream>
namespace seneca {
	// Base class
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

	// Derived class
	// The following class inherits from the above class in a "public" way 
	// (try remove that or change that to "private" to see the effect!)
	// The "access" (that comes after ":") identifies the access that 
	// member functions of the derived class have to the non-private members of the base class.
	// The default access is private. The most common access is public.
	class HourlyBasedEmployee : public Employee {
	};
}
#endif // !SENECA_EMPLOYEE1_H_