#include <iostream>
using namespace std;

int main() {
	//create variables of different types
	char c = 'a';
	short s = 1;
	int i = 0;
	long l = 2;
	long long ll = 3;
	float f = 4.0;
	double d = 5.0;
	long double ld = 6.0;

	//print the sizes of the variables
	cout << "size of char: " << sizeof(c) << endl;
	cout << "size of short: " << sizeof(s) << endl;
	cout << "size of int: " << sizeof(i) << endl;
	cout << "size of long: " << sizeof(l) << endl;
	cout << "size of long long: " << sizeof(ll) << endl;
	cout << "size of float: " << sizeof(f) << endl;
	cout << "size of double: " << sizeof(d) << endl;
	cout << "size of long double: " << sizeof(ld) << endl;

	//print the values of the variables
	cout << "value of char: " << c << endl;
	cout << "value of short: " << s << endl;
	cout << "value of int: " << i << endl;
	cout << "value of long: " << l << endl;
	cout << "value of long long: " << ll << endl;
	cout << "value of float: " << f << endl;
	cout << "value of double: " << d << endl;
	cout << "value of long double: " << ld << endl;

	//create a boolean variable
	bool flag = false;

	if (flag) {
		cout << "the flag is true!" << endl;
	}
	else {
		cout << "the flag is false!" << endl;
	}

	flag = true;
	if (flag) {
		cout << "the flag is true!" << endl;
	}
	else {
		cout << "the flag is false!" << endl;
	}

	//assign a number to a boolean variable
	flag = 0;
	cout << flag << endl;

	flag = 1234;
	cout << flag << endl;

	return 0;
}