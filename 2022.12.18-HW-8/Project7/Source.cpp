#include <iostream>

void z(char* s, int i, int end)
{
	if (i + 1 < end)
	{
		std::cout << s[i] << "*";
		return z(s, ++i, end);
	}
	else
	{
		std::cout << s[i] << std::endl;
	}
}

int main(int argc, char* argv[])
{
	char* s = nullptr;
	s = new char[1000]{ 0 };

	std::cin.getline(s, 1000);

	z(s, 0, strlen(s));

	delete[]s;

	return EXIT_SUCCESS;
}