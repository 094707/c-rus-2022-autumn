#include<iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	long a[101] = { 0 };
	int x = 0;
	int i = 1;

	std::cin >> n;
	for (int i = 1; i <= n; ++i)
	{
		std::cin >> a[i];
	}
	std::cin >> x;

	do
	{
		++i;
	} while (x <= a[i]);
	std::cout << i << std::endl;

	return EXIT_SUCCESS;
}