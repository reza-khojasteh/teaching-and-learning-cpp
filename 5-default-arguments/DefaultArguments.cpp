#include <iostream>
using namespace std;

void print(char = 'A', size_t = 10);

int main() {
	print();
	print(66);
	print('C', 30);
	return 0;
}

void print(char character, size_t size) {
	for (size_t i = 0; i < size; i++) {
		cout << character;
	}
	cout << endl;
}
