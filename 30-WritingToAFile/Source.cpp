// Writing to a File
// writeFile.cpp

#include <iostream>
#include <fstream>

int main() {
	int i;
	// Create an output stream to write to the file "output.txt"
	std::ofstream fout("output.txt");
	// Check if the file was opened successfully
	if (fout.is_open()) {
		fout << 1 << std::endl;   // record 1
		fout << 3.14 << std::endl;   // record 2
		fout << "Line" << std::endl;   // record 3
	}
	// Otherwise, print an error message
	else {
		std::cout << "Error opening file." << std::endl;
	}
	// The file is closed implicitly here but you can close it explicitly
	fout.close();
	return 0;
}