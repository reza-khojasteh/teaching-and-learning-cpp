#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
#include <cstring>

// Employee structure
struct Employee {
	long m_id{};
	char* m_firstName{};
	char* m_lastName{};
};

// Function prototypes
void setEmployee(Employee&, long, const char*, const char*);
void deallocateEmployee(Employee&);
void printEmployee(const Employee&);
void readEmployee(Employee&);

int main() {
	// Declare an array of Employee structures
	Employee* employees = nullptr;

	// Read the number of employees
	size_t size{};
	cout << "How many employees do we have?" << endl;
	cin >> size;

	// Allocate memory for the array of Employee structures
	employees = new Employee[size];

	// Read the information for each employee
	for (size_t i = 0; i < size; i++) {
		readEmployee(employees[i]);
	}

	// Print the information for each employee
	for (size_t i = 0; i < size; i++) {
		printEmployee(employees[i]);
	}

	// Deallocate memory for the array of Employee structures
	for (size_t i = 0; i < size; i++) {
		deallocateEmployee(employees[i]);
	}

	// Deallocate memory for the array of Employee structures
	delete[] employees;
	// Set the pointer to nullptr (optional but recommended)
	employees = nullptr;

	return 0;
}

void setEmployee(Employee& employee, long id, const char* firstName, const char* lastName) {
	employee.m_id = id;
	employee.m_firstName = new char[strlen(firstName) + 1];
	employee.m_lastName = new char[strlen(lastName) + 1];

	// Check if memory allocation was successful
	if (employee.m_firstName && employee.m_lastName) {
		strcpy(employee.m_firstName, firstName);
		strcpy(employee.m_lastName, lastName);
	}
	// If memory allocation failed, deallocate memory and set the pointers to nullptr
	else {
		delete[] employee.m_firstName;
		delete[] employee.m_lastName;
		employee.m_firstName = employee.m_lastName = nullptr;
	}
}


void deallocateEmployee(Employee& employee) {
	// Deallocate memory for the first name and last name
	delete[] employee.m_firstName;
	delete[] employee.m_lastName;
	// Set the pointers to nullptr
	employee.m_firstName = employee.m_lastName = nullptr;
}

void printEmployee(const Employee& employee) {
	cout << "Employee ID: " << employee.m_id << endl;
	cout << "Employee Name: " << employee.m_firstName << " " << employee.m_lastName << endl;
}

void readEmployee(Employee& employee) {
	long id;
	char firstName[41];
	char lastName[41];
	cout << "Employee ID: ";
	cin >> id;
	cout << "Employee First Name: ";
	cin >> firstName;
	cout << "Employee Last Name: ";
	cin >> lastName;
	setEmployee(employee, id, firstName, lastName);
	cout << endl;
}