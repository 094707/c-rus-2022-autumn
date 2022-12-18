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
	case 1: std::cout << "сто ";
		break;
	case 2: std::cout << "двести ";
		break;
	case 3: std::cout << "триста ";
		break;
	case 4: std::cout << "четыреста ";
		break;
	case 5: std::cout << "пятьсот ";
		break;
	case 6: std::cout << "шестьсот ";
		break;
	case 7: std::cout << "семьсот ";
		break;
	case 8: std::cout << "восемьсот ";
		break;
	case 9: std::cout << "девятьсот ";
		break;
	}
	switch (c2)
	{
	case 1: std::cout << "десять ";
		break;
	case 2: std::cout << "двадцать ";
		break;
	case 3: std::cout << "тридцать ";
		break;
	case 4: std::cout << "сорок ";
		break;
	case 5: std::cout << "пятьдесят ";
		break;
	case 6: std::cout << "шестьдесят ";
		break;
	case 7: std::cout << "семьдесят ";
		break;
	case 8: std::cout << "восемьдесят ";
		break;
	case 9: std::cout << "девяносто ";
		break;
	}
	switch (c3)
	{
	case 1: std::cout << "один банан";
		break;
	case 2: std::cout << "два банана";
		break;
	case 3: std::cout << "три банана";
		break;
	case 4: std::cout << "четыре банана";
		break;
	case 5: std::cout << "пять бананов";
		break;
	case 6: std::cout << "шесть бананов";
		break;
	case 7: std::cout << "семь бананов";
		break;
	case 8: std::cout << "восемь бананов";
		break;
	case 9: std::cout << "девять бананов";
		break;
	default: std::cout << "бананов";
	}

	return EXIT_SUCCESS;
}