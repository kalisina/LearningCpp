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

void testingPointers2() {
	std::cout << "Testing pointers 2! " << std::endl;

	void* ptr = nullptr;

	int x = 3;
	std::cout << "x = " << x << std::endl;
	std::cout << "&x = " << &x << std::endl;

	int* y = &x; // y is a pointer containing the address of x
	std::cout << "y = " << y << std::endl; // should be an address
	std::cout << "&y = " << &y << std::endl; // should be another address
	std::cout << "*y = " << *y << std::endl; // should be the value of x

	int** z = &y;
	std::cout << "z = " << z << std::endl; // doublePointer

	**z = 4;

	char* buffer = new char[8]; // pointer to the beginning of that data (will hold address of the first element)
	memset(buffer, 0, 8);

	char** ptrBuffer = &buffer;

	delete[] buffer; // must delete the buffer to avoid memory leaks
}