#include <iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	int index = 0;
	int a[100000] = { 0 };

	std::cin >> n;
	for (int i = 0; i < n; ++i)
	{
		std::cin >> a[i];
		if (a[i] == 1)
		{
			index = i;
		}
	}
	
	for (int i = 0; i < n; ++i)
	{
		std::cout << a[(index + i) % n] << ' ';
	}

	return EXIT_SUCCESS;
}