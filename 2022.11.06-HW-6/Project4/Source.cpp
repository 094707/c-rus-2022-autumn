#include<iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	int mas[1001] = { 0 };
	int copy[1001] = { 0 };
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;

	std::cin >> n >> a >> b >> c >> d;
	for (int i = 1; i <= n; ++i)
	{
		mas[i] = i;
		copy[i] = mas[i];
	}

	for (int i = a; i <= b; ++i)
	{
		mas[i] = copy[b - i + a];
	}
	for (int i = a; i <= b; ++i)
	{
		copy[i] = mas[i];
	}
	for (int i = c; i <= d; ++i)
	{
		mas[i] = copy[d - i + c];
	}

	for (int i = 1; i <= n; ++i)
	{
		std::cout << mas[i] << ' ';
	}

	return EXIT_SUCCESS;
}