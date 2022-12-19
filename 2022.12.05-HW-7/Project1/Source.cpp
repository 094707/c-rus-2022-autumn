#include<iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	int m = 0;
	int sum_n = 0;
	int sum_m = 0;

	std::cin >> n >> m;

	int** mas = new int* [n] { 0 };
	for (int i = 0; i < n; ++i)
	{
		mas[i] = new int [m] { 0 };
	}
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			std::cin >> mas[i][j];
		}
	}
	std::cout << std::endl;

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			sum_n += mas[i][j];
		}
		std::cout << sum_n << ' ';
		sum_n = 0;
	}
	std::cout << std::endl;
	for (int i = 0; i < m; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			sum_m += mas[j][i];
		}
		std::cout << sum_m << ' ';
		sum_m = 0;
	}
	std::cout << std::endl;
	std::cout << std::endl;
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			std::cout << mas[i][j] << ' ';
		}
		std::cout << std::endl;
	}

	for (int i = 0; i < n; ++i)
	{
		delete[] mas[i];
	}
	delete[] mas;
	return EXIT_SUCCESS;
}