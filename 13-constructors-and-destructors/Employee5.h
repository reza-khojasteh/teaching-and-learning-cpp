#ifndef SENECA_EMPLOYEE5_H_
#define SENECA_EMPLOYEE5_H_
namespace seneca {
	// Employee class
	// It will be a good practice to define a constructor for the class to initialize the members of the class.
	// In other words, to avoid undefined behavior or broken objects, 
	// we need to initialize each object to an empty state at creation time, through a constructor.
	// It will also be a good practice to define a destructor for the class, for tidying up at the end of an object's lifetime.
	// An object with dynamically allocated memory needs to deallocate that memory before going out of scope. 
	// The same way, an object that has written data to a file needs to flush the file's buffer 
	// and close the file before going out of scope.
	class Employee {
	private:
		long m_ID{};
		char m_fName[41]{};
		char m_lName[41]{};
	public:
		// Constructor (the same name as the class, does not have a return type, can be overloaded, and are "usually" public)
		Employee();
		// Overloaded constructor
		Employee(long, const char*, const char*);
		// Setters and getters
		void set(long, const char*, const char*);
		void print() const;
		// Destructor (the same name as the class but preceded by a tilde (~), does not have a return type, 
		// cannot be overloaded, is "usually" public, and should not be called explicitly)
		~Employee();
	};
}
#endif // !SENECA_EMPLOYEE5_H_