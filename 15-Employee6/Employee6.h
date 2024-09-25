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
		Employee();
		Employee(long, const char*, const char*);
		// Setter and getter/query functions
		void set(long, const char*, const char*);
		void print() const;
		// Destructor
		~Employee();
	};
}
#endif // !SENECA_EMPLOYEE1_H_