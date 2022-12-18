#include<iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	int a[1000] = { 0 };
	int min = 1000;
	int max = 0;

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
		}
		if (a[i] < min)
		{
			min = a[i];
		}
	}
	for (int i = 0; i < n; ++i)
	{
		if (a[i] == max)
		{
			a[i] = min;
		}
	}
	for (int i = 0; i < n; ++i)
	{
		std::cout << a[i] << ' ';
	}
	
	return EXIT_SUCCESS;
}