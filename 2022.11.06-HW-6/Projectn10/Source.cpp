#include<iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	int a[30000] = { 0 };
	int m = 0; 
	int b[30000] = { 0 };
	
	
	std::cin >> n >> m;
	for (int i = 0; i < n; ++i)
	{
		std::cin >> a[i];
	}
	for (int i = 0; i < m; ++i)
	{
		std::cin >> b[i];
	}
	
	for (int i = 0; i < n - 1; ++i)
	{
		if (a[i] != -1)
		{
			for (int j = i + 1; j < n; ++j)
			{
				if (a[j] == a[i])
				{
					a[j] = -1;
				}
			}
		}
	}
	for (int i = 0; i < m - 1; ++i)
	{
		if (b[i] != -1)
		{
			for (int j = i + 1; j < m; ++j)
			{
				if (b[j] == b[i])
				{
					b[j] = -1;
				}
			}
		}
	}
	for (int i = 0; i < n; ++i)
	{
		if (a[i] != -1)
		{
			for (int j = 0; j < m; ++j)
			{
				if (a[i] == b[j])
				{
					std::cout << a[i] << ' ';
				}
			}
		}
	}

	return EXIT_SUCCESS;
}