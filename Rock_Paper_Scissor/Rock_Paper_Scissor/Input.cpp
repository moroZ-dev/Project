#include <iostream>

int choose()
{
	setlocale(LC_ALL, "");
	std::cout << "�������� �������: \n 1 - ������ \n 2 - ������� \n 3 - ������" << std::endl;
	int x;
	std::cin >> x;
	return x;
}