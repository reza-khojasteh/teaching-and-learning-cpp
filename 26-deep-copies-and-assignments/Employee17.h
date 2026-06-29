#ifndef SENECA_EMPLOYEE17_H_
#define SENECA_EMPLOYEE17_H_
namespace seneca {
	class Employee {
	private:
		long m_ID{};
		char m_fName[41]{};
		char m_lName[41]{};
		// We have added a new data member to express the number of days worked by an employee.
		int m_noOfDaysWorked{};
		// We have added a new data member to express the number of hours worked per day by an employee.
		// Based on the defintion, it can be either an array or a pointer to an array.
		// Since we want to use the dynamic memory allocation, we will use a pointer to an array
		// and m_noOfHoursWorkedPerDay will hold the address of the resource (which lies outside the object's static memory).
		int* m_noOfHoursWorkedPerDay{};
	public:
		// Constructors (incuding a cast operator; the second one.)
		Employee();
		Employee(long);
		Employee(long, const char*, const char*, int, int*);
		// Copy constructor
		Employee(const Employee&);

		// Getter/query/accessor function
		const Employee& print() const;

		// Assignment operator overload
		Employee& operator=(const Employee&);

		// Destructor
		~Employee();
	};
}
#endif // !SENECA_EMPLOYEE17_H_