#include<iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	int a[1001] = { 0 };
	int max = 0;

	std::cin >> n;
	for (int i = 1; i <= n; ++i)
	{
		std::cin >> a[i];
	}
	a[0] = a[n];
	a[n + 1] = a[1];

	for (int i = 1; i <= n; ++i)
	{
		if (a[i - 1] + a[i] + a[i + 1] > max)
		{
			max = a[i - 1] + a[i] + a[i + 1];
		}
	}

	std::cout << max  << std::endl;

	return EXIT_SUCCESS;
}