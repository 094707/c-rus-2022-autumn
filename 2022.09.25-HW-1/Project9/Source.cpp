#include <iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	int z = 0;
	int s = 0;

	std::cin >> n;
	z = n * n;
	s = z * (z + n + 1) + n + 1;
	std::cout << s << std::endl;

	return EXIT_SUCCESS;
}