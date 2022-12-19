#include<iostream>

int usl(int n)
{
	if (n == 1)
	{
		return 1;
	}
	if ((n == 2) || (n == 3))
	{
		return 0;
	}
	else
	{
		if ((usl(n - 3) == 1) || (usl(n - 5) == 1))
		{
			return 1;
		}
	}
}

int main(int argc, char* argv[])
{
	int n = 0;

	std::cin >> n;

	if (usl(n) == 1)
	{
		std::cout << "YES" << std::endl;
	}
	else
	{
		std::cout << "NO" << std::endl;
	}

	return EXIT_SUCCESS;
}