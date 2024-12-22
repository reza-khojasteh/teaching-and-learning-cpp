// Tester.cpp

#include<iostream>
using namespace std;
#include "Calculator.h"

/**
 * Runs a test suite for the calculator functions.
 * 
 * @param BASE The base number for the power calculation.
 * @param EXPONENT The exponent for the power calculation.
 * @param RESULT The expected result of the power calculation.
 * @return The number of tests passed.
 */
int testSuite(int BASE, int EXPONENT, double RESULT) {
    int passed = 0;
    double result;

	// test the power function
    result = power(BASE, EXPONENT);

    if (result == RESULT) {
        cout << "Raise to Power Test Passed" << endl;
        passed++;
    }
    else {
        cout << "Raise to Power Test Failed" << endl;
	}

	// test the exponent function
	result = exponent(RESULT, BASE);

    if (result == EXPONENT) {
        cout << "Find Exponent Test Passed" << endl;
        passed++;
    }
    else {
        cout << "Find Exponent Test Failed" << endl;
    }

    return passed;
}