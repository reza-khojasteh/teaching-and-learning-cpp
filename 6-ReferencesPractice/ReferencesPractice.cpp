#include <iostream>
using namespace std;

// This function takes a reference to an integer and prints it out.
// It then increments the value of the integer that is one memory address away from the reference.
void foo(int& x) {
	cout << x << endl;

	// This line increments the value of the integer that is one memory address away from the reference.
	*(&x + 1) += 1; // OR (*(&x + 1))++;
}

int main() {
	// This line creates an array of 3 integers and initializes it with the values 1, 2, and 3.
	int a[3]{ 1, 2, 3 };

	// This line prints out the first three elements of the array, initially.
	cout << a[0] << a[1] << a[2] << endl;

	// This line passes the dereference of the first element of the array to the foo function.
	// (Dereferencing is the act of accessing the value stored at the memory address pointed to by a pointer.)
	foo(*a);

	// This line prints out the first three elements of the array, again!
	cout << a[0] << a[1] << a[2];
}