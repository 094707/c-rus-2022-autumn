#include<iostream>

int main(int argc, char* argv[])
{
	int a = 0;
	int b = 0;
	int i = 0;

	std::cin >> a >> b;

	i = a; 
	do
	{
		std::cout << a << ' ';
		a += 1;
	} while (a < b + 1);

	return EXIT_SUCCESS;
}