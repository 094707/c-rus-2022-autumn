#include <iostream>

int main(int argc, char* argv[])
{
	int f1 = 0;
	int f2 = 0;
	int k1 = 0;
	int k2 = 0;

	std::cin >> f1 >> f2 >> k1 >> k2;
	if ((f1 == k1) || (f2 == k2) || ((f2 - k2) * (f2 - k2) == (f1 - k1) * (f1 - k1)))
	{
		std::cout << "YES";
	}
	else
	{
		std::cout << "NO";
	}
	return EXIT_SUCCESS;
}