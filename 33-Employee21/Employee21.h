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
		// Setter/mutator function
		Employee& read(std::istream&);
	// Introducing protected access modifier
	// The keyword protected limits access to members of a derived class.
	// Any member function of a derived class may access 
	// any protected or public member of its base class.
	// What if we had declared print to be protected this time (instead of public)?
	protected:
		const Employee& print(std::ostream&) const;
	};
	// Helper functions
	std::istream& operator>>(std::istream&, Employee&);
	// We can't have the following this time, because of using protected!
	// Look at the corresponding cpp file and try to justify why!
	//std::ostream& operator<<(std::ostream&, const Employee&);

	// Derived class
	// Now, let's add some member variables and member functions to the derived class
	class HourlyBasedEmployee : public Employee {
	private:
		// Specific data members
		double m_noOfHoursWorked{};
		double m_hourlyRate{};
	public:
		// Derived class getters
		double getNoOfHorsWorked() const;
		double getHourlyRate() const;
		// Derived class setters
		HourlyBasedEmployee& setNoOfHorsWorked(double);
		HourlyBasedEmployee& setHourlyRate(double);
		// And now, we have to declare a print function for the derived class to call the print in the base!
		// Granting protected access to any data member exposes that member to potential corruption and is considered poor design.
		// A protected read-only query is a preferable alternative to protected access to a data member.
		// The query below does not allow any modification of the value in the data member.
		// Note that this is considering an override for the print function in the base class
		// (It actually shadows over that!)
		const HourlyBasedEmployee& print(std::ostream&) const;
	};
}
#endif // !SENECA_EMPLOYEE1_H_