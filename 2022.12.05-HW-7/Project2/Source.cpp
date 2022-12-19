#include<iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	int sw = 0;

	std::cin >> n;

	int** mas = new int* [n] { 0 };
	for (int i = 0; i < n; ++i)
	{
		mas[i] = new int [n] { 0 };
	}
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			std::cin >> mas[i][j];
		}
	}
	std::cout << std::endl;
	
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			std::cout << mas[j][i] << ' ';
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