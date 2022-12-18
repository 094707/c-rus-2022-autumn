#include <iostream>

int main(int argc, char* argv[])
{
	int M = 0;
	int N = 0;
	int x = 0;
	int y = 0;

	std::cin >> M >> N >> x >> y;
	if (x == 1)
	{
		std::cout << x + 1 << ' ' << y << std::endl;
	}
	else
	{
		if (x == M)
		{
			std::cout << x - 1 << ' ' << y << std::endl;
		}
		else
		{
			std::cout << x + 1 << ' ' << y << std::endl;
			std::cout << x - 1 << ' ' << y << std::endl;
		}
	}
	if (y == 1)
	{
		std::cout << x << ' ' << y + 1 << std::endl;
	}
	else
	{
		if (y == N)
		{
			std::cout << x << ' ' << y - 1 << std::endl;
		}
		else
		{
			std::cout << x << ' ' << y - 1 << std::endl;
			std::cout << x << ' ' << y + 1 << std::endl;
		}
	}

	return EXIT_SUCCESS;
}