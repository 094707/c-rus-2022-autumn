#include<iostream>

int fib(int n)
{	
	if ((n == 0) || (n == 1))
	{
		return 1;
	}
	else
	{
			return fib(n - 1) + fib(n - 2);
	}
}

int main(int argc, char* argv[])
{
	int n = 0;

	std::cin >> n;

	std::cout << fib(n) << std::endl;

	return EXIT_SUCCESS;
}