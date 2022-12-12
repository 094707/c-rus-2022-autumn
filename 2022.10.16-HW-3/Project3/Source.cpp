#include<iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	int str = 0;
	int a = 0;

	std::cin >> n;

	do
	{
		++str;
		a = str;
		do
		{
			std::cout << a << ' ';
			++a;
		} while (a < n + str);
		std::cout << std::endl;
	} while (str < n);

	return EXIT_SUCCESS;
}