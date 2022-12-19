#include <iostream>

void sk(char* s, int i, int end)
{
	if (end % 2 == 1)
	{
		if (i < end)
		{
			if ((s[i] != s[end - i - 1]) && (i != end / 2) || (i == end / 2))
			{
				std::cout << s[i];
				return sk(s, ++i, end);
			}
			else
			{
				return sk(s, ++i, end);
			}
		}
	}
	else
	{
		if (i < end)
		{
			if ((s[i] != s[end - i - 1]) && (i != end / 2))
			{
				std::cout << s[i];
				return sk(s, ++i, end);
			}
			else
			{
				return sk(s, ++i, end);
			}
		}
	}
}

int main(int argc, char* argv[])
{
	char* s = nullptr;
	s = new char[1000]{ 0 };

	std::cin.getline(s, 1000);

	sk(s, 0, strlen(s));

	delete[]s;

	return EXIT_SUCCESS;
}