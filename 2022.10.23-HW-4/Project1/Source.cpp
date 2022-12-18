#include<iostream>

int main(int argc, char* argv[])
{
	int x = 0;
	int res = 2;

	std::cin >> x;

	for (int i = 2; i <= x / 2; ++i)
	{
		if (x % i == 0)
		{
			++res;
		}
	}
	std::cout << res << std::endl;

	return EXIT_SUCCESS;
}