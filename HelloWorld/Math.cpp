#include <iostream>
void Log(const char* message);

int Multiply(int a, int b) {
	Log("multiply");
	return a * b;
}

void MultiplyAndLog(int a, int b) {
	int result = a * b;
	std::cout << result << std::endl;
}

void Fibonacci(void) {
	std::cout << "Fibonacci" << std::endl;

	/*
	* f(0) = 0
	* f(1) = 1
	* f(n) = f(n-1) + f(n-2) for n >=2
	*/

	int i, n = 16;
	int fibonacciNumbers[32] = { 0, 1 };

	for (i = 2; i <= n; ++i)
	{
		fibonacciNumbers[i] = fibonacciNumbers[i - 1] + fibonacciNumbers[i - 2];
		std::cout << "fibonacciNumbers[" << i << "] = " << fibonacciNumbers[i] << std::endl;
	}

}

int Factorial(int a) {
	if (a == 1) {
		return 1;
	}
	return a * Factorial(a - 1);
}