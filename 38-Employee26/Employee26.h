#ifndef SENECA_EMPLOYEE1_H_
#define SENECA_EMPLOYEE1_H_
#include <iostream>
namespace seneca {
	// An Abstract Base class/interface
	class Employee {
	private:
		// Base class data members
		long m_ID{};
		char m_fName[41]{};
		char m_lName[41]{};
	public:
		// Base class constructor, note that this can't be used to instantiate/create objects of this type
		// and will be just called when the constructor for the derived class object is called!
		Employee(long, const char*, const char*);
		// Base class getters (one at the time)
		virtual const Employee& print(std::ostream&) const;
		// A pure virtual member function (does not have an implementation by default, 
		// because its implementation is dependent on the class which inherits/implements this 
		// abstract class/interface!
		virtual double calculateSalary() = 0;
		// Base class destructor
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
		// In this class, we intend to provide some implementation for the following member function 
		// (because we can!) so that this class is no longer abstract (now, it's called concrete!)
		// Also, note that the keyword "virtual" is not necessary here.
		double calculateSalary();
	};
}
#endif // !SENECA_EMPLOYEE1_H_