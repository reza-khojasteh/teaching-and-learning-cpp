#ifndef SENECA_EMPLOYEE1_H_
#define SENECA_EMPLOYEE1_H_
#include <iostream>
namespace seneca {
	// Base class
	class Employee {
	private:
		// Base class data members
		long m_ID{};
		char m_fName[41]{};
		char m_lName[41]{};
	public:
		// Base class constructor
		Employee(long, const char*, const char*);
		// Base class getters (one at the time)
		virtual const Employee& print(std::ostream&) const;
		// Base class setters (one at the time)
		Employee& read(std::istream&);
		// Note that not using virtual destructors when dealing with inheritance can lead to undefined behavior, 
		// resource leaks, and incomplete object destruction when deleting objects through base class pointers. 
		// It's generally a good practice to make base class destructors virtual if the class is intended to be used polymorphically:
		virtual ~Employee();
	};

	// Derived class
	class HourlyBasedEmployee : public Employee {
	private:
		// Specific/derived class data members
		double m_noOfHoursWorked{};
		double m_hourlyRate{};
	public:
		// Derived class constructor
		HourlyBasedEmployee(long, const char*, const char*, double, double);
		// Derived class getters
		double getNoOfHorsWorked() const;
		double getHourlyRate() const;
		// Derived class print method (note that the keyword "virtual" is not necessary here)
		const HourlyBasedEmployee& print(std::ostream&) const;
		// Derived class setters
		HourlyBasedEmployee& setNoOfHorsWorked(double);
		HourlyBasedEmployee& setHourlyRate(double);
	};
}
#endif // !SENECA_EMPLOYEE1_H_