#ifndef SENECA_EMPLOYEE1_H_
#define SENECA_EMPLOYEE1_H_
#include <iostream>
namespace seneca {
	// A pure interface (normally contains just pure virtual member functions!)
	class iEmployee {
	public:
		virtual double calculateSalary() = 0;
		virtual const iEmployee& print(std::ostream&) const = 0;
	};
	// An Abstract Base class/interface
	class Employee : public iEmployee {
	private:
		// Base class data members
		long m_ID{};
		char m_fName[41]{};
		char m_lName[41]{};
	public:
		// Base class constructor, note that this can't be used to instantiate/create objects of this type
		// and will be just called when the constructor for the derived class object is called!
		Employee(long, const char*, const char*);
		// Base class getter now gives an implementation to one of the pure virtual functions
		// (note that the keyword "virtual" is not necessary here)
		const Employee& print(std::ostream&) const;
		// As this class inherits the pure virtual member function from the interface,
		// it does not even need to be mentioned here!
		//virtual double calculateSalary() = 0;
	};

	// One Employee derived class
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

	// Another Employee derived class
	class SalaryBasedEmployee : public Employee {
	private:
		// Specific/derived class data members
		double m_monthlySalary{};
	public:
		// Derived class constructor
		SalaryBasedEmployee(long, const char*, const char*, double);
		// Derived class getters
		double getMonthlySalary() const;
		// Derived class print method (note that the keyword "virtual" is not necessary here)
		const SalaryBasedEmployee& print(std::ostream&) const;
		// Derived class setter
		SalaryBasedEmployee& setMonthlySalary(double);
		// In this class, we intend to provide some implementation for the following member function 
		// (because we can!) so that this class is no longer abstract (now, it's called concrete!)
		// Also, note that the keyword "virtual" is not necessary here.
		double calculateSalary();
	};

	// And you can have as many as you wish, like CommissionBasedEmployee and...
}
#endif // !SENECA_EMPLOYEE1_H_