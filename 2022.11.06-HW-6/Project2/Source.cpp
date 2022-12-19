#include<iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	long a[1001] = { 0 };
	int m = 0;
	int s1[100] = { 0 };
	int s2[100] = { 0 };

	std::cin >> n;
	for (int i = 1; i <= n; ++i)
	{
		std::cin >> a[i];
	}
	std::cin >> m;
	for (int i = 0; i < m; ++i)
	{
		std::cin >> s1[i] >> s2[i];
	}

	for (int i = 0; i < m; ++i)
	{
		for (int j = s1[i]; j <= s2[i]; ++j)
		{
			std::cout << a[j] << ' ';
		}
		std::cout << std::endl;
	}

	return EXIT_SUCCESS;
}