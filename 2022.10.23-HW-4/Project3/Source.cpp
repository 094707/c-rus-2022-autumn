#include<iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	int k = 0;
	int count = 0;
	int a = 0;

	std::cin >> n;

	for (int i = 1; i <= n; ++i)
	{
		for (int j = 1; (j <= i) && (k < n); ++j)
		{
			std::cout << i << ' ';
			++k;
		}
	}

	return EXIT_SUCCESS;
}