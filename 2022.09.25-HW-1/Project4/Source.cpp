#include <iostream>

int main(int argc, char* argv[])
{
	int v = 0;
	int t = 0;
	int n = 0;

	std::cin >> v >> t;
	n = (109 + v * t % 109) % 109;
	std::cout << n << std::endl;

	return EXIT_SUCCESS;
}