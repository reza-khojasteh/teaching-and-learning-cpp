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
		void set(long, const char*, const char*, int);
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

	// A class can accept external support in the form of global functions containing additional logic; 
	// we call these functions helper functions.
	// Helper functions access the objects of a class through their parameters.
	// A free or loosely coupled helper function is a function that obtains all of its information 
	// from the public member functions of the class that it supports.
	// A free helper function does not require access to the private members of its class.
	// The coupling between a free helper function and its class is minimal, which is an ideal design solution.
	// Note that this might lead to "class bloat" because if we add new member variables to the class,
	// we have to add new member functions to support the helper function!
	bool areTheSame(const Employee&, const Employee&);
}
#endif // !SENECA_EMPLOYEE1_H_