#include <iostream>
using namespace std;

// size_t is an unsigned integral type which is defined in various header files such as 
// <cstddef>, <cstdio>, <cstdlib>, <cstring>, <ctime>, <cwchar>, <cwctype> etc.
// It's size is platform dependent, but it's guaranteed to be big enough to contain 
// the size of the biggest object your system can handle.
void print(char, size_t);
void print(size_t, char);
void print(char);
void print();
//problematic because of the conflict with the other print function
//void print(size_t);


int main() {
	print('A', 10);
	print(66);
	print(30, 'C');
	print();
	return 0;
}

//problematic because of the conflict with the other print function
//void print(size_t size) {
//	print('-', size);
//}

void print(char character) {
	print(character, 20);
}

void print(char character, size_t size) {
	for (size_t i = 0; i < size; i++) {
		cout << character;
	}
	cout << endl;
}

void print(size_t size, char character) {
	for (size_t i = 0; i < size; i++) {
		cout << character;
	}
	cout << endl;
}

void print() {
	print('D', 40);
	cout << endl;
}
