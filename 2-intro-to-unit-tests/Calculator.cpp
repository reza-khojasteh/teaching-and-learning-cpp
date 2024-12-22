// Calculator.cpp

#include<cstdlib>

#include "Calculator.h"

/**
 * Calculates the power of a base raised to an exponent.
 *
 * @param base The base number.
 * @param exp The exponent.
 * @return The result of the power operation.
 */
double power(int base, int exp) {
    int i;
    double result = 1.0;

	// check if the exponent is positive or negative
    if (exp >= 0)
    {
		// multiply the base by itself exp times
        for (i = 0; i < exp; i++)
            result *= base;
    }
    else
    {
		// divide the base by itself exp times
        for (i = 0; i < abs(exp); i++)
        {
            result /= base;
        }
    }

    return result;
}

/**
 * Calculates the exponent of a given result and base.
 *
 * @param result The result of a calculation.
 * @param base The base number.
 * @return The exponent of the result with respect to the base.
 */
int exponent(double result, int base) {
    int exp = 0;

	// check if the result is greater than or equal to the base
    if (result >= base)
    {
		// divide the result by the base until the result is less than the base
		while (result >= base) {
            exp++;
            result /= base;
		}
    }
    else
    {
		// multiply the result by the base until the result is greater than or equal to 1
        while (result < 1.0) {
            exp--;
            result *= double(base);
        }
    }

    return exp;
}
