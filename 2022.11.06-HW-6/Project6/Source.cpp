#include<iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	long a[100] = { 0 };
	int m3 = 0;
	int m4 = 0;

	std::cin >> n;
	for (int i = 0; i < n; ++i)
	{
		std::cin >> a[i];
	}

	for (int i = 0; i < n; ++i)
	{
		if (a[i] % 2 == 1)
		{
			++m3;
			std::cout << a[i] << ' ';
		}
	}
	std::cout << std::endl;
	for (int i = 0; i < n; ++i)
	{
		if (a[i] % 2 == 0)
		{
			++m4;
			std::cout << a[i] << ' ';
		}
	}
	std::cout << std::endl;
	if (m3 <= m4)
	{
		std::cout << "YES" << std::endl;
	}
	else
	{
		std::cout << "NO" << std::endl;
	}

	return EXIT_SUCCESS;
}