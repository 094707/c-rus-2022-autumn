#include <iostream>
#include <clocale>

int main(int argc, char* argv[])
{
	setlocale(LC_ALL, "Russian");

	int n = 0;
	int c1 = 0;
	int c2 = 0;
	int c3 = 0;

	std::cin >> n;
	c1 = n / 100;
	c2 = n / 10 % 10;
	c3 = n % 10;
	switch (c1)
	{
	case 1: std::cout << "��� ";
		break;
	case 2: std::cout << "������ ";
		break;
	case 3: std::cout << "������ ";
		break;
	case 4: std::cout << "��������� ";
		break;
	case 5: std::cout << "������� ";
		break;
	case 6: std::cout << "�������� ";
		break;
	case 7: std::cout << "������� ";
		break;
	case 8: std::cout << "��������� ";
		break;
	case 9: std::cout << "��������� ";
		break;
	}
	switch (c2)
	{
	case 1: std::cout << "������ ";
		break;
	case 2: std::cout << "�������� ";
		break;
	case 3: std::cout << "�������� ";
		break;
	case 4: std::cout << "����� ";
		break;
	case 5: std::cout << "��������� ";
		break;
	case 6: std::cout << "���������� ";
		break;
	case 7: std::cout << "��������� ";
		break;
	case 8: std::cout << "����������� ";
		break;
	case 9: std::cout << "��������� ";
		break;
	}
	switch (c3)
	{
	case 1: std::cout << "���� �����";
		break;
	case 2: std::cout << "��� ������";
		break;
	case 3: std::cout << "��� ������";
		break;
	case 4: std::cout << "������ ������";
		break;
	case 5: std::cout << "���� �������";
		break;
	case 6: std::cout << "����� �������";
		break;
	case 7: std::cout << "���� �������";
		break;
	case 8: std::cout << "������ �������";
		break;
	case 9: std::cout << "������ �������";
		break;
	default: std::cout << "�������";
	}

	return EXIT_SUCCESS;
}