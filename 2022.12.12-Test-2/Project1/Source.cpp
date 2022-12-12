#include<iostream>

int rek(int i)
{
	if (i > 0)
	{
		return rek(i - 1);
	}
	else
	{
		return 0;
	}
}

int main(int argc, char* argv[])
{
	int n = 0;
	int k = 0;

	std::cout << "Write size of map, and amount of magaraja (less than 2)" << std::endl;
	std::cin >> n >> k;

	rek(2);
	if (k == 1)
	{
		std::cout << n * n << std::endl;
	}
	else
	{
		std::cout << "incorrect amount of magaraja" << std::endl;
	}

	return EXIT_SUCCESS;
}