#include<iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	int a[100001] = { 0 };
	int k = 0;

	std::cin >> n;
	for (int i = 1; i <= n; ++i)
	{
		std::cin >> a[i];
	}
	std::cin >> k;

	if (k >= 0)
	{
		for (int count = 0; count < k; ++count)
		{
			a[0] = a[n];
			for (int i = n; i > 0; --i)
			{
				a[i] = a[i - 1];
			}
		}
	}
	else
	{
		for (int count = 0; count < abs(k); ++count)
		{
			a[0] = a[1];
			for (int i = 1; i < n; ++i)
			{
				a[i] = a[i + 1];
			}
			a[n] = a[0];
		}
	}

	for (int i = 1; i <= n; ++i)
	{
		std::cout << a[i] << ' ';
	}

	return EXIT_SUCCESS;
}