#ifndef SENECA_EMPLOYEE1_H_
#define SENECA_EMPLOYEE1_H_
namespace seneca {
	// Base class
	class Employee {
	private:
		long m_ID{};
		char m_fName[41]{};
		char m_lName[41]{};
	public:
		// Constructors
		Employee();
		Employee(long, const char*, const char*);

		// Getter/query/accessor function
		const Employee& print() const;
	};

	// One Employee derived class, this time utilizing DMA
	class HourlyBasedEmployee : public Employee {
	private:
		// Specific/derived class data members
		// We have added a new data member to express the number of hours worked by an employee.
		int m_noOfDaysWorked{};
		// We have added a new data member to express the number of hours worked per day by an employee.
		// Based on the defintion, it can be either an array or a pointer to an array.
		// Since we want to use the dynamic memory allocation, we will use a pointer to an array
		// and m_noOfHoursWorkedPerDay will hold the address of the resource (which lies outside the object's static memory).
		int* m_noOfHoursWorkedPerDay{};
	public:
		// Derived class constructors
		HourlyBasedEmployee();
		HourlyBasedEmployee(long, const char*, const char*, int, int*);
			
		// Getter/query/accessor function
		const HourlyBasedEmployee& print() const;

		// Copy constructor
		HourlyBasedEmployee(const HourlyBasedEmployee&);

		// Assignment operator overload
		HourlyBasedEmployee& operator=(const HourlyBasedEmployee&);

		// Derived class destructor
		~HourlyBasedEmployee();
	};
}
#endif // !SENECA_EMPLOYEE1_H_