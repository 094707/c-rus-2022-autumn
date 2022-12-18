#include<iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	float res = 1;
	int fact = 1;

	std::cin >> n;

	for (int i = 0; i < n; ++i)
	{
		res += 1. / fact;
		fact *= fact + 1;
	}
	std::cout << res << std::endl;

	return EXIT_SUCCESS;
}