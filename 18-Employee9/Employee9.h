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
		// This operator will increment the number of hours worked by 1
		// and return a reference to the object because it's a prefix operator
		// (it will return the object after the incrementation)
		Employee& operator++();
		// Since we have no resources to release, we don't need a destructor...
	};
}
#endif // !SENECA_EMPLOYEE1_H_