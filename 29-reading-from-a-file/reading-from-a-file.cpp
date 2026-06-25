// Reading a File
// readFile.cpp

#include <iostream>
#include <fstream>

int main() {
	int i;
	// Open file
	std::ifstream fin("input.txt");
	// Check if file is open
	if (fin.is_open()) {
		// As long as there is data in the file
		// A stream object is not ready for further streaming if it has encountered an error and has not been cleared.
		while (fin) {
			// Read from file
			fin >> i;
			// Check if the read was successful
			// If the read was successful, print the number
			if (fin)
				std::cout << i << ' ';
			// If the read was not successful, print an error message and break the loop
			else
				std::cout << "\n**Bad input, reading from file failed and can no longer read from file**\n";
		}
	}
	// If file is not open
	else {
		std::cout << "Error opening file...\n";
	}

	return 0;
}