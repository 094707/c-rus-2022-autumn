#include<iostream>

int main(int argc,char* argv[])
{
	int a = 0;
	int k = 0;

	do
	{
		std::cin >> a;
		if ((a < 0) && (a % 2 == -1))
		{
			k += 1;
		}
	} while (a != 0);
	std::cout << k;

	return EXIT_SUCCESS;
}