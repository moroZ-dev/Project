#include <iostream>

void result(int user, int computer)
{
	if (user == computer)
	{
		std::cout << "У вас ничья!";
	}
	else if (user == 1)
	{
		if (computer == 2)
		{
			std::cout << "Вы выбрали камень\nКомпьютер выбрал ножницы\nВы победили!" << std::endl;
		}
		if (computer == 3)
		{
			std::cout << "Вы выбрали камень\nКомпьютер выбрал бумагу\nВы проиграли!" << std::endl;
		}
	}
	else if (user == 2)
	{
		if (computer == 1)
		{
			std::cout << "Вы выбрали ножницы\nКомпьютер выбрал камень\nВы проиграли!" << std::endl;
		}
		if (computer == 3)
		{
			std::cout << "Вы выбрали ножницы\nКомпьютер выбрал бумагу\nВы выиграли!" << std::endl;
		}
	}
	else if (user == 3)
	{
		if (computer == 1)
		{
			std::cout << "Вы выбрали бумагу\nКомпьютер выбрал камень\nВы выиграли!" << std::endl;
		}
		if (computer == 2)
		{
			std::cout << "Вы выбрали бумагу\nКомпьютер выбрал ножницы\nВы проиграли!" << std::endl;
		}
	}

}