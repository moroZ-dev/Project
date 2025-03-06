#include <iostream>

int choose()
{
	setlocale(LC_ALL, "");
	std::cout << "Выберите элемент: \n 1 - Камень \n 2 - Ножницы \n 3 - Бумага" << std::endl;
	int x;
	std::cin >> x;
	return x;
}