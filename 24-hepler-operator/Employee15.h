#ifndef SENECA_EMPLOYEE15_H_
#define SENECA_EMPLOYEE15_H_
namespace seneca {
	class Employee {
	private:
		long m_ID{};
		char m_fName[41]{};
		char m_lName[41]{};
		int m_noOfHoursWorked{};
	public:
		// Constructors (incuding a cast operator; the second one.)
		Employee();
		Employee(long);
		Employee(long, const char*, const char*, int);
		// Setter/mutator/modifier function (at the time we have one, but could be more!
		// Also, we have not done any validation on the data so far, but we should in a real-world application.)
		Employee& set(long, const char*, const char*, int);
		// Getter/query/accessor function (we are adding all possible queries for our class this time,
		// because we need them to support the helper function down there.)
		const Employee& print() const;
		long getID() const { return m_ID; }
		const char* getFName() const { return m_fName; }
		const char* getLName() const { return m_lName; }
		int getNoOfHoursWorked() const { return m_noOfHoursWorked; }
		// A binary member operator (+= overload)
		Employee& operator+=(int);
		// A unary member operator (++ as a prefix overload)
		Employee& operator++();
		// A unary member operator (++ as a postfix overload)
		Employee operator++(int);
		// A type conversion operator overload
		operator bool() const;
		// Since we have no resources to release, we don't need a destructor
		// but in case we have, we should have one.
	};

	// As an alternative to free helper functions, we can utilize hepler operators.
	// Helper operators are global functions that overload operators. 
	// Candidates for helper operators are operators that do not change the values of their operands 
	// and take two operands: + - * / % == != >= <= > < << >>
	bool operator==(const Employee&, const Employee&);

	// Another example could be the operator+ overload, which is a binary operator that does not change the values of its operands.
	Employee operator+(const Employee&, int);

	// Now, For symmetry, we overload the addition operator for identical operand types but in reverse order.
	Employee operator+(int, const Employee&);
}
#endif // !SENECA_EMPLOYEE15_H_