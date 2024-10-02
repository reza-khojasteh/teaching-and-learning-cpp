#ifndef SENECA_EMPLOYEE1_H_
#define SENECA_EMPLOYEE1_H_
namespace seneca {
	class Employee {
	private:
		long m_ID{};
		char m_fName[41]{};
		char m_lName[41]{};
		// We have added a new data member to express the number of hours worked by an employee.
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

		// Getter/query/accessor function (we are adding all possible queries for our class this time,
		// because we need them to support the helper function down there.)
		const Employee& print() const;

		// Assignment operator overload
		Employee& operator=(const Employee&);

		// Destructor
		~Employee();
	};
}
#endif // !SENECA_EMPLOYEE1_H_