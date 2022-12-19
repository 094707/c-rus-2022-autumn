#include<iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	int m = 0;
	std::cin >> n >> m;

	int** mas_1 = new int* [n] { 0 };
	for (int i = 0; i < n; ++i)
	{
		mas_1[i] = new int [m] {0};
	}
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			std::cin >> mas_1[i][j];
		}
	}
	std::cout << std::endl;
	int** mas_2 = new int* [n] { 0 };
	for (int i = 0; i < n; ++i)
	{
		mas_2[i] = new int [m] {0};
	}
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			std::cin >> mas_2[i][j];
		}
	}
	std::cout << std::endl;

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			std::cout << mas_1[i][j] + mas_2[i][j] << ' ';
		}
		std::cout << std::endl;
	}

	for (int i = 0; i < n; ++i)
	{
		delete[] mas_1[i];
		delete[] mas_2[i];
	}
	delete[] mas_1;
	delete[] mas_2;

	return EXIT_SUCCESS;
}