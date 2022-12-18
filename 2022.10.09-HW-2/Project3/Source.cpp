#include <iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	int k = 0;
	int m = 0;
	int res = 0;

	std::cin >> k >> m >> n;
	if (n <= k)
	{
		res = 2 * m;
	}
	else
	{
		if (n % k == 0)
		{
			res = m * (2 * n / k);
		}
		else
		{
			res = m * (2 * n / k + 1);
		}
	}
	std::cout << res << std::endl;

	return EXIT_SUCCESS;
}