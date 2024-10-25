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
		// Base class constructors (incuding a cast operator; the second one.)
		Employee();
		Employee(long);
		Employee(long, const char*, const char*);
		// Base class getters (one at the time)
		const Employee& print(std::ostream&) const;
		// Base class setters(one at the time)
		Employee& read(std::istream&);
		// Base class destructor (just to show the order once run)
		~Employee();
	};
	// Helper functions
	std::istream& operator>>(std::istream&, Employee&);
	std::ostream& operator<<(std::ostream&, const Employee&);

	// Derived class
	class HourlyBasedEmployee : public Employee {
	private:
		// Specific/derived class data members
		double m_noOfHoursWorked{};
		double m_hourlyRate{};
	public:
		// Now, let's add some constructors to the derived class
		// Note that a derived class does not inherit the constructors, 
		// the destructor or the copy assignment operator, 
		// from the base class by default; these functions in the derived class
		// automatically call the base class's versions.
		HourlyBasedEmployee();
		HourlyBasedEmployee(long);
		HourlyBasedEmployee(long, const char*, const char*, double, double);
		// Derived class getters
		double getNoOfHorsWorked() const;
		double getHourlyRate() const;
		const HourlyBasedEmployee& print(std::ostream&) const;
		// Derived class setters
		HourlyBasedEmployee& setNoOfHorsWorked(double);
		HourlyBasedEmployee& setHourlyRate(double);
		// Destructor (just to show the order once run)
		~HourlyBasedEmployee();
	};
}
#endif // !SENECA_EMPLOYEE1_H_