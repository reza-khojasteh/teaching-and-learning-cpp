#ifndef SENECA_EMPLOYEE1_H_
#define SENECA_EMPLOYEE1_H_
namespace seneca {
	class Employee {
	private:
		long m_ID{};
		char m_fName[41]{};
		char m_lName[41]{};
		int m_noOfHoursWorked{};
	public:
		// Constructors
		Employee();
		Employee(long, const char*, const char*, int);
		// Setter function
		void set(long, const char*, const char*, int);
		// Getter/query function
		const Employee& print() const;
		// A binary member operator (+= overload)
		Employee& operator+=(int);
		// A unary member operator (++ as a prefix overload)
		Employee& operator++();
		// A unary member operator (++ as a postfix overload)
		// This operator will increment the number of hours worked by 1
		// and return a copy of the object before the incrementation
		// because it's a postfix operator (it will return the object before the incrementation)
		// It will take an int as a parameter to differentiate it from the prefix operator
		// (the int parameter is not used in the function)
		Employee operator++(int);
		// Since we have no resources to release, we don't need a destructor...
	};
}
#endif // !SENECA_EMPLOYEE1_H_