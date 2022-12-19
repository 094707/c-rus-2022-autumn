#include <iostream>

void hanoi(int n, int from, int to)
{
	int go = 6 - to - from;
	if (n == 1)
	{
		std::cout << "Disk 1 move from" << " " << from << " to " << to << std::endl;
		return;
	}
	hanoi(n - 1, from, go);
	std::cout << "Disk " << n << " move from " << from << " to " << to << std::endl;
	hanoi(n - 1, go, to);
}

int main(int argc, char* argv[])
{
	int n = 0;

	std::cin >> n;

	hanoi(n, 1, 2);

	return EXIT_SUCCESS;
}