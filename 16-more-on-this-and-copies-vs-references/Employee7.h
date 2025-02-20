#ifndef SENECA_EMPLOYEE7_H_
#define SENECA_EMPLOYEE7_H_
namespace seneca {
	class Employee {
	private:
		long m_ID{};
		char m_fName[41]{};
		char m_lName[41]{};
	public:
		// Constructors
		Employee();
		Employee(long, const char*, const char*);
		// Setter and getter/query functions
		void set(long, const char*, const char*);
		// A new setter function to demonstrate another use case of 'this' pointer
		void set();
		// This time, print() will return a copy of its host object
		// This is a bit of a change from the previous versions
		// This is done to demonstrate the concept of returning an object from a function
		// Using 'this' pointer to access the members of the object
		//Employee print() const;
		// Note that we can improve this definition print() function
		// by returning a const reference to the current object instead of a copy of the object.
		// This would improve performance if the space the object takes is large, 
		// since copying all of its member variables would take long.
		// Returning a reference to the object, on the other hand,
		// only copies the object's address which is typically a 4-byte operation:
		const Employee& print() const;
		
		// Destructor
		~Employee();
	};
}
#endif // !SENECA_EMPLOYEE7_H_