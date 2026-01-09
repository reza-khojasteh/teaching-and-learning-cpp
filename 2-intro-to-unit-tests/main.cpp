// main.cpp

#include<iostream>
using namespace std;

#include "Tester.h"

int main() {
    int passed = 0;

    passed += testSuite(5, 3, 125);
	passed += testSuite(5, -3, 0.008);// We have now solved the issue we had with the version in the notes! (check Calculator.cpp)
	// But what about the other test cases? (check the ones commented out below)
	//passed += testSuite(9, 0, 1); 
	//passed += testSuite(0, 9, 0);

    cout << passed << " Tests Passed" << endl;
}