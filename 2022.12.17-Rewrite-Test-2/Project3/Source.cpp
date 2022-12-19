#include<iostream>

int prime(int n, int del)
{
	if (del > 1)
	{
		if (n % del == 0)
		{
			return 0;
		}
		else
		{
			return prime(n, del - 1);
		}
	}
	else
	{
		return 1;
	}
}

int main(int argc, char* argv[])
{
	int n = 0;
	int del = 0;

	std::cin >> n;

	del = sqrt(n);
	if (prime(n, del) == 1)
	{
		std::cout << "prime" << std::endl;
	}
	else
	{
		std::cout << "composite" << std::endl;
	}

	return EXIT_SUCCESS;
}