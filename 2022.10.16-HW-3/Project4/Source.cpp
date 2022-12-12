#include<iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	int str = 0;
	int k = 0;
	int a = 0;

	std::cin >> n;

	do
	{
		++str;
		a = str;
		do
		{
			std::cout << a << ' ';
			++k;
			if (k + str <= n)
			{
				++a;
			}
			else
			{
				--a;
			}
		} while (n != k);
		std::cout << std::endl;
		k = 0;
	} while (str < n);

	return EXIT_SUCCESS;
}