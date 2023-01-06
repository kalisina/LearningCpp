#include <iostream>
void testingPointers() {
	std::cout << "Hello pointers! " << std::endl;

	int var = 8;
	int* ptr = &var;
	std::cout << "var = " << var << " - and ptr = " << ptr << std::endl;
	std::cout << "Pointed value is " << *ptr << std::endl;

	// double pointers
	int** dptr = &ptr;
	std::cout << "dptr = " << dptr << " - original pointed value = " << *dptr << std::endl;

	char* buffer = new char[8];
	memset(buffer, 0, 8);

	char** bufferDptr = &buffer;
	std::cout << "bufferDptr = " << bufferDptr << " - original pointed value = " << *bufferDptr << std::endl;

	delete[] buffer;
}