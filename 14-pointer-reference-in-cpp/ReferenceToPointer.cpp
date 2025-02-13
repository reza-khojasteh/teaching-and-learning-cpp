// In this code, the "changePointer" function takes a pointer to a 
// character as an argument. Inside the function, 
// a new memory location is allocated and the pointer is made to point 
// to this new memory location.
// However, the original pointer in the "main" function remains unchanged.
// To change the original pointer, you need to pass a reference to the pointer 
// (remove the comment).

#include <iostream>
using namespace std;

void changePointer(char*/*&*/ ptr) {
	ptr = new char[10];
}

int main() {
	char* str = nullptr;
	cout << (str == nullptr ? "str is null" : "str is not null") << endl;
	changePointer(str);
	cout << (str == nullptr ? "str is still null" : "str is no longer null") << endl;
}
