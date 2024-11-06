#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
using namespace std;
#include <cstring>

#include "Employee27.h"

namespace seneca {
	Employee::Employee(long id, const char* fName, const char* lName) {
		m_ID = id;
		strcpy(m_fName, fName);
		strcpy(m_lName, lName);
	}

	void Employee::print(ostream& os) const {
		if (m_ID == 0 && m_fName[0] == '\0' && m_lName[0] == '\0')
			os << endl << "Employee object is empty" << endl;
		else {
			os.setf(ios::fixed);
			os.widen(10);

			os << endl << "Employee ID: " << m_ID << endl
				<< "Employee Name: " << m_fName << " " << m_lName << endl;

			os.unsetf(ios::fixed);
		}
	}

	// This constructor calls the base class's constructor, 
	// and then, does the initializations for the specific parts
	HourlyBasedEmployee::HourlyBasedEmployee(long id, const char* fName, const char* lName, double noOfHoursWorked, double hourlyRate)
		: Employee(id, fName, lName) {
		setNoOfHorsWorked(noOfHoursWorked);
		setHourlyRate(hourlyRate);
	}

	// And now, the implementations for the derived class member functions:
	double HourlyBasedEmployee::getNoOfHorsWorked() const {
		return m_noOfHoursWorked;
	}

	double HourlyBasedEmployee::getHourlyRate() const {
		return m_hourlyRate;
	}

	HourlyBasedEmployee& HourlyBasedEmployee::setNoOfHorsWorked(double noOfHoursWorked) {
		m_noOfHoursWorked = noOfHoursWorked;
		return *this;
	}

	HourlyBasedEmployee& HourlyBasedEmployee::setHourlyRate(double hourlyRate) {
		m_hourlyRate = hourlyRate;
		return *this;
	}

	void HourlyBasedEmployee::print(std::ostream& os) const {
		Employee::print(os);

		os << "Employee Number Of Hours Worked: " << m_noOfHoursWorked << endl
			<< "Employee Hourly Rate: " << m_hourlyRate << endl;
	}
	// Here, we provide a body to the pure virtual function (as the contract we have with the interface!)
	// If we don't do the following, the derived class will also be/remain as an abstract one!
	double HourlyBasedEmployee::calculateSalary() {
		return getNoOfHorsWorked() * getHourlyRate();
	}

	// This constructor calls the base class's constructor, 
	// and then, does the initializations for the specific parts
	SalaryBasedEmployee::SalaryBasedEmployee(long id, const char* fName, const char* lName, double monthlySalary)
		: Employee(id, fName, lName) {
		setMonthlySalary(monthlySalary);
	}

	// And now, the implementations for the derived class member functions:
	double SalaryBasedEmployee::getMonthlySalary() const {
		return m_monthlySalary;
	}

	SalaryBasedEmployee& SalaryBasedEmployee::setMonthlySalary(double monthlySalary) {
		m_monthlySalary = monthlySalary;
		return *this;
	}

	void SalaryBasedEmployee::print(std::ostream& os) const {
		Employee::print(os);

		os << "Employee Monthly Salary: " << m_monthlySalary << endl;
	}
	// Here, we provide a body to the pure virtual function (as the contract we have with the interface!)
	// If we don't do the following, the derived class will also be/remain as an abstract one!
	double SalaryBasedEmployee::calculateSalary() {
		return getMonthlySalary();
	}
}