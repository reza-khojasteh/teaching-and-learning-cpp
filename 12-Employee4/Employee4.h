#ifndef SENECA_EMPLOYEE1_H_
#define SENECA_EMPLOYEE1_H_
namespace seneca {
	// Employee class
	// It will be a better practice to use a class 
	// instead of a struct for the Employee type.
	// By default, all members in a C++ class are private, unless specified otherwise!
	// We can change the access level of the members by using the access specifiers: 
	// and it's still the best practice is to use the access specifiers 
	// to make the code more readable and maintainable.
	class Employee {
		// You might want not to use the private access specifier in a class
	private:
		long m_ID{};
		char m_fName[41]{};
		char m_lName[41]{};
		// But you have to use the public access specifier 
		// to make the members accessible from outside the class
	public:
		void set(long, const char*, const char*);
		void print() const;
	};

	// Let's assume this time, we have another function 
	// that is not a member of the class and receives an Employee object reference
	void printEmployee(const Employee&);
}
#endif // !SENECA_EMPLOYEE1_H_