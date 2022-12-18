#include<iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	int a[1000] = { 0 };
	int x = 0;
	int res = 0;

	std::cin >> n;
	for (int i = 0; i < n; ++i)
	{
		std::cin >> a[i];
	}
	std::cin >> x;

	for (int i = 0; i < n; ++i)
	{
		if (a[i] == x)
		{
			++res;
		}
	}

	std::cout << res << std::endl;

	return EXIT_SUCCESS;
}