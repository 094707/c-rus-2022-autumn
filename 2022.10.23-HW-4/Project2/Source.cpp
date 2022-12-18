#include<iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	int res = 0;
	int k = 1;

	std::cin >> n;

	for (int i = 0; i < 10; ++i)
	{
		res += (n % 10) * k;
		n = n / 10;
		k *= 2;
	}
	std::cout << res << std::endl;

	return EXIT_SUCCESS;
}