// main.cpp

#include<iostream>
using namespace std;

#include "Tester.h"

int main() {
    int passed = 0;

    passed += testSuite(5, 3, 125);
    passed += testSuite(5, -3, 0.008);
	passed += testSuite(9, 0, 1);
	//passed += testSuite(0, 9, 0);

    cout << passed << " Tests Passed" << endl;
}