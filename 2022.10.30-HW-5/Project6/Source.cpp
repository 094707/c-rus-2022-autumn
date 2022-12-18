#include<iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	int v[100] = { 0 };
	int p[100] = { 0 };
	float max = 0;
	int index = 0;

	std::cin >> n;
	for (int i = 0; i < n; ++i)
	{
		std::cin >> v[i];
	}
	for (int i = 0; i < n; ++i)
	{
		std::cin >> p[i];
	}

	for (int i = 0; i < n; ++i)
	{
		if (v[i] * p[i] > max)
		{
			max = v[i] * p[i];
			index = i;
		}
	}

	std::cout << index + 1 << std::endl;

	return EXIT_SUCCESS;
}