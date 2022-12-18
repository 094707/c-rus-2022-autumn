#include <iostream>

int main(int argc, char* argv[])
{
	int c1 = 0;
	int m1 = 0;
	int s1 = 0;
	int c2 = 0;
	int m2 = 0;
	int s2 = 0;
	int n = 0;

	std::cin >> c1 >> m1 >> s1 >> c2 >> m2 >> s2;
	n = ((c2 - c1) * 60 + m2 - m1) * 60 + s2 - s1;
	std::cout << n << std::endl;

	return EXIT_SUCCESS;
}