#include<iostream>

void per(int n, int a, int b);
void hanoi_2(int n, int a, int b);

void per(int n, int a, int b)
{
	if (((a == 1) && (b == 2)) || ((a == 2) && (b == 3)) || ((a == 3) && (b == 1)))
	{
		std::cout << n << " moves from " << a << " to " << b << std::endl;
	}
	else
	{
		std::cout << n << " moves from " << a << " to " << 6 - a - b << std::endl;
		std::cout << n << " moves from " << 6 - a - b << " to " << b << std::endl;
	}
}

void hanoi_2(int n, int a, int b)
{
	if (((a == 1) && (b == 3)) || ((a == 2) && (b == 1)) || ((a == 3) && (b == 2)))
	{
		if (n == 1)
		{
			per(1, a, b);
		}
		else
		{
			hanoi_2(n - 1, a, b);
			per(n, a, 6 - a - b);
			hanoi_2(n - 1, b, a);
			per(n, 6 - a - b, b);
			hanoi_2(n - 1, a, b);
		}
	}
	else
	{
		if (n == 1)
		{
			per(n, a, b);
		}
		else
		{
			hanoi_2(n - 1, a, 6 - a - b);
			per(n, a, b);
			hanoi_2(n - 1, 6 - a - b, b);
		}
	}
}

int main(int argc, char* argv[])
{
	int n = 0;

	std::cin >> n;

	hanoi_2(n, 1, 3);

	return EXIT_SUCCESS;
}