#ifndef SENECA_EMPLOYEE1_H_
#define SENECA_EMPLOYEE1_H_
namespace seneca {
	class Employee {
	private:
		long m_ID{};
		char m_fName[41]{};
		char m_lName[41]{};
	public:
		// Constructors
		Employee(/*Employee* this*/);
		Employee(/*Employee* this, */long, const char*, const char*);
		// Setter and getter/query functions
		void set(/*Employee* this, */long, const char*, const char*);
		void print(/*Employee* this*/) const;
		// Destructor
		~Employee(/*Employee* this*/);
	};
}
#endif // !SENECA_EMPLOYEE1_H_