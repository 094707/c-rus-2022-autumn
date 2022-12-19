#include<iostream>
#include<cstring>

int max(char* s, int m, int i)
{
	if (i >= 0)
	{
		if (s[i] > m)
		{
			m = s[i];
		}
		return max(s, m, --i);
	}
	else
	{
		return m - 48;
	}
}

int main(int argc, char* argv[])
{
	char* s = nullptr;
	s = new char[1000]{ 0 };

	std::cin.getline(s, 1000);

	std::cout << max(s, 0, strlen(s)) << std::endl;

	delete[] s;

	return EXIT_SUCCESS;
}