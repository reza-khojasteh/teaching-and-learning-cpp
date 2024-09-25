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
		// A cast operator overload: C++ defines the casting operation for a class
		// in terms of a single-argument constructor. 
		// This overloaded constructor defines the rule for casting a value of its parameter type 
		// to the class type, as well as constructing an object from an argument of the parameter type.
		// To prohibit the compiler from using a single-argument constructor 
		// for any implicit conversion, we declare that constructor "explicit" as:
		//explicit Employee(long);
		// With such a declaration, the statement "employee2 = 987654321;" in "main.cpp"
		// would generate a compiler error.
		Employee(long);
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
		Employee operator++(int);
		// A type conversion operator overload
		operator bool() const;
		// Since we have no resources to release, we don't need a destructor...
	};
}
#endif // !SENECA_EMPLOYEE1_H_