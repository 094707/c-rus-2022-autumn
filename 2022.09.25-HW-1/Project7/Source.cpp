#include<iostream>

int main(int argc, char* argv[])
{
	int a = 0;
	int b = 0;
	int sw = 0;
	std::cin >> a >> b;

	sw = a;
	a = b;
	b = sw;

	std::cout << a << ' ' << b << std::endl;
	return EXIT_SUCCESS;
}