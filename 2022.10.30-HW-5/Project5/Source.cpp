#include<iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	int a[1000] = { 0 };
	int x = 0;
	int dif = 1000;

	std::cin >> n;
	for (int i = 0; i < n; ++i)
	{
		std::cin >> a[i];
	}
	std::cin >> x;

	for (int i = 0; i < n; ++i)
	{
		if (abs(x - a[i]) < dif)
		{
			dif = abs(x - a[i]);
		}
	}

	for (int i = 0; i < n; ++i)
	{
		if (abs(x - a[i]) == dif)
		{
			std::cout << a[i] << std::endl;
			return 0;
		}
	}

	return EXIT_SUCCESS;
}