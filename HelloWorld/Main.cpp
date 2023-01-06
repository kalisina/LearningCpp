#include <iostream>
#include "Log.h"
#include "Math.h"
#include "Pointers.h"

int main()
{
	
	std::cout << "Hello World" << std::endl;
	Log("Hello World 2");
	int res = Multiply(5, 8);
	std::cout << res << std::endl;

	float f = 5.0;

	int s = sizeof(char);
	std::cout << "sizeof char = " << s << std::endl;

	MultiplyAndLog(3, 9);
	MultiplyAndLog(12, 15);
	MultiplyAndLog(8, 6);

	//Fibonacci();

	//std::cout << "Factorial(5) = " << Factorial(5) << std::endl;

	testingPointers();

	std::cin.get();
}