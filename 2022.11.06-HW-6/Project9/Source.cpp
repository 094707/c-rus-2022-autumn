#include<iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	int c[100] = { 0 };
	int max = 0;
	int index = 0;
	int res = 0;
	int index1 = 0;

	std::cin >> n;
	for (int i = 0; i < n; ++i)
	{
		std::cin >> c[i];
	}
	
	do
	{
		max = c[index1];
		index = index1;
		for (int i = index1; i < n; ++i)
		{
			if (c[i] > max)
			{
				max = c[i];
				index = i;
			}
		}
		res += c[index] * (index - index1 + 1);
		index1 = index + 1;
	} while (index1 != n);

	std::cout << res << std::endl;

	return EXIT_SUCCESS;
}