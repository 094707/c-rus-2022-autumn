#include<iostream>

int min2(int a, int b)
{
	if (a > b)
	{
		return b;
	}
	else
	{
		return a;
	}
}
int min4(int a, int b, int c, int d)
{
	return min2(min2(a, b), min2(c, d));
}

int main(int argc, char* argv[])
{
	int n1 = 0;
	int n2 = 0;
	int n3 = 0;
	int n4 = 0;

	std::cin >> n1 >> n2 >> n3 >> n4;

	std::cout << min4(n1, n2, n3, n4) << std::endl;

	return EXIT_SUCCESS;
}