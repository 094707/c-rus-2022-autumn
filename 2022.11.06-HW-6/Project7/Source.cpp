#include<iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	int a[100] = { 0 };
	int min = 101;
	int max = 0;
	int sum = 0;
	long prod = 1;
	int imax = 0;
	int imin = 0;

	std::cin >> n;
	for (int i = 0; i < n; ++i)
	{
		std::cin >> a[i];
	}
	
	for (int i = 0; i < n; ++i)
	{
		if (a[i] > max)
		{
			max = a[i];
			imax = i;
		}
		if (a[i] < min)
		{
			min = a[i];
			imin = i;
		}
		if (a[i] > 0)
		{
			sum += a[i];
		}
	}
	if (imax < imin)
	{
		for (int i = imax + 1; i < imin; ++i)
		{
			prod *= a[i];
		}
	}
	else
	{
		for (int i = imin + 1; i < imax; ++i)
		{
			prod *= a[i];
		}
	}
	std::cout << sum << ' ' << prod << std::endl;

	return EXIT_SUCCESS;
}