#ifndef SENECA_EMPLOYEE1_H_
#define SENECA_EMPLOYEE1_H_
namespace seneca {
	// Employee structure
	// By default, all members in a C++ struct are public, unless specified otherwise!
	// We can change the access level of the members by using the access specifiers: 
	// public, protected, and private.
	// The best practice is to use the access specifiers 
	// to make the code more readable and maintainable.
	struct Employee {
		// Let's make the member variables private
	private:
		long m_ID{};
		char m_fName[41]{};
		char m_lName[41]{};
		// And the function prototypes public
	public:
		void set(long, const char*, const char*);
		void print() const;
	};
}
#endif // !SENECA_EMPLOYEE1_H_