#include<iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	int a[1001] = { 0 };
	int l = 0;
	int r = 0;
	int index = 0;
	int max = 0;

	std::cin >> n;
	for (int i = 1; i <= n; ++i)
	{
		std::cin >> a[i];
	}
	std::cin >> l >> r;

	for (int i = l; i <= r; ++i)
	{
		if (a[i] > max)
		{
			max = a[i];
			index = i;
		}
	}

	std::cout << max << ' ' << index << std::endl;

	return EXIT_SUCCESS;
}