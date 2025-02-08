#ifndef SENECA_EMPLOYEE4_H_
#define SENECA_EMPLOYEE4_H_
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

	// Let's assume this time, we have other function 
	// that are not members of the class.

	// The first one is a function that prints the information of an Employee object
	// and receives a const Employee object reference which means that the function
	// can't change the object through the reference.
	void printEmployee(const Employee&);
	// The second one is a function that sets the information of an Employee object
	// and receives an Employee object reference which means that the function
	// can change the object through the reference.
	void setEmployee(Employee&, long, const char*, const char*);
}
#endif // !SENECA_EMPLOYEE4_H_