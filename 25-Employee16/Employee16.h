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
		// Now, using 'friend', we can ignore the folowing getters:
		/*long getID() const { return m_ID; }
		const char* getFName() const { return m_fName; }
		const char* getLName() const { return m_lName; }
		int getNoOfHoursWorked() const { return m_noOfHoursWorked; }*/
		// A binary member operator (+= overload)
		Employee& operator+=(int);
		// A unary member operator (++ as a prefix overload)
		Employee& operator++();
		// A unary member operator (++ as a postfix overload)
		Employee operator++(int);
		// A type conversion operator overload
		operator bool() const;
		// Friendship grants helper functions access to the private members of a class and minimizes "class bloat".
		// By granting friendship status, a class lets a helper function access to any of its private members.
		// To grant a helper function friendship status, we declare the function a friend of the class 
		// and place its declaration inside the class definition.
		friend bool operator==(const Employee&, const Employee&);
		// Since we have no resources to release, we don't need a destructor
		// but in case we have, we should have one.
	};

	// This time, instead of the helper operator overload as:
	//bool operator==(const Employee&, const Employee&);
	// we want to use a friend function to overload the operator== (defined in the class definition).

	// Another example could be the operator+ overload, which is a binary operator that does not change the values of its operands.
	Employee operator+(const Employee&, int);

	// Now, For symmetry, we overload the addition operator for identical operand types but in reverse order.
	Employee operator+(int, const Employee&);
}
#endif // !SENECA_EMPLOYEE1_H_