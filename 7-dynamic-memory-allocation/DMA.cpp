#include <iostream>
using namespace std;

int main() {
	// dma for a single integer
	int* dma = new int;

	cout << "Enter your int: ";
	cin >> *dma;
	cout << "Your int was: " << *dma << endl;

	// delete the memory
	delete dma;
	// set the pointer to nullptr (as a best practice)
	// nullptr is a special keyword that represents a null pointer
	dma = nullptr;

	if (dma == nullptr) {
		cout << "dma is nullptr now!" << endl;
	}

	// dma for an array of integers
	// first, get the size of the array from the user
	size_t size{};
	cout << "Enter the number of integer values: " << endl;
	cin >> size;

	// now, allocate the memory for the array
	dma = new int[size];
	for (size_t i = 0; i < size; i++) {
		cout << (i + 1) << ": ";
		cin >> dma[i];
	}

	// delete the memory
	delete[] dma; // Be careful not to forget the square brackets!
	// set the pointer to nullptr (as a best practice)
	dma = nullptr;

	if (dma == nullptr) {
		cout << "dma is nullptr now!" << endl;
	}

	return 0;
}