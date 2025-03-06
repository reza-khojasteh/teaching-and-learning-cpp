#ifndef SENECA_EMPLOYEE1_H_
#define SENECA_EMPLOYEE1_H_
namespace seneca {
	class Employee {
	private:
		long m_ID{};
		char m_fName[41]{};
		char m_lName[41]{};
		// A new member variable to demonstrate the number of hours worked by the employee
		int m_noOfHoursWorked{};
	public:
		// Constructors
		Employee();
		// A new constructor to include the number of hours worked by the employee
		Employee(long, const char*, const char*, int);
		// Setter function
		// A new setter function to include the number of hours worked by the employee
		void set(long, const char*, const char*, int);
		// Getter/query function
		const Employee& print() const;
		// Now, let's overload the += operator for an int as the right operand, 
		// in order to add some hours to the noOfHoursWorked for the Employee object.
		// It is implementing a binary operation, the first operand is the object itself, 
		// and the second operand is an int.
		// It will return a reference to the object because we are modifying the object itself.
		Employee& operator+=(int);
		// Since we have no resources to release, we don't need a destructor...
	};
}
#endif // !SENECA_EMPLOYEE1_H_