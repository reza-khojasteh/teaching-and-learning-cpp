#include "Employee3.h"
using namespace seneca;

int main() {
	// Create two Employee objects and display their information
	Employee employee1;
	employee1.set(123456789, "John", "Doe");
	employee1.print();

	Employee employee2;
	employee2.set(987654321, "Jane", "Doe");
	employee2.print();

	// This time, we can't access the member variables directly 
	// and the following line will cause a compilation error
	//employee1.m_ID = 987654321;
	// And the only way to access a private member variables 
	// is through public member functions (interfaces)

	return 0;
}