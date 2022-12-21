#include <iostream>

int main(int argc, char* argv[])
{
	int a = 0;
	int b = 0;
	int c = 0;
	int n = 0;

	std::cin >> a >> b >> c;
	if ((a > b + c) || (b > a + c) || (c > a + b))
	{
		std::cout << "impossible";
	}
	else
	{
		if ((a >= b) && (a >= c))
		{
			n = a;
		}
		else
		{
			if ((b >= a) && (b >= c))
			{
				n = b;
			}
			else
			{
				n = c;
			}
		}
		if ((2 * n * n > a * a + b * b + c * c))
		{
			std::cout << "obtuse" << std::endl;
		}
		else
		{
			if ((2 * n * n == a * a + b * b + c * c))
			{
				std::cout << "right" << std::endl;
			}
			else
			{
				std::cout << "acute" << std::endl;
			}
		}
	}

	return EXIT_SUCCESS;
}