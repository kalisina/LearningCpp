#include <iostream>
#include "Log.h"

int Multiply(int a, int b);

int main()
{
	//std::cout << "Hello World" << std::endl;
	Log("Hello World 2");
	int res = Multiply(5, 8);
	std::cout << res;
	std::cin.get();
}