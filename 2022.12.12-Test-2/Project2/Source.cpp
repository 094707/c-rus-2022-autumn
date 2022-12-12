#include<iostream>

int revers1(int* mas, int a, int b)
{
	int sw = 0;
	sw = mas[a];
	mas[a] = mas[b];
	mas[b] = sw;
	if (a + 1 >= b - 1)
	{
		return 0;
	}
	else
	{
		revers1(mas, a + 1, b - 1);
	}
}
int revers2(int* mas, int n)
{
	if (n == 1)
	{
		return 0;
	}
	else
	{
		revers1(mas, 0, n - 1);
	}
}



int main(int argc, char* argv[])
{
	int n = 0;
	std::cin >> n;
	int* mas = new int[n] {0};
	for (int i = 0; i < n; i++)
	{
		std::cin >> mas[i];
	}
	revers2(mas, n);
	for (int i = 0; i < n; i++)
	{
		std::cout << mas[i] << ' ';
	}

	return EXIT_SUCCESS;
}