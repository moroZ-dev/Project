#include <iostream>

void result(int user, int computer)
{
	if (user == computer)
	{
		std::cout << "� ��� �����!";
	}
	else if (user == 1)
	{
		if (computer == 2)
		{
			std::cout << "�� ������� ������\n��������� ������ �������\n�� ��������!" << std::endl;
		}
		if (computer == 3)
		{
			std::cout << "�� ������� ������\n��������� ������ ������\n�� ���������!" << std::endl;
		}
	}
	else if (user == 2)
	{
		if (computer == 1)
		{
			std::cout << "�� ������� �������\n��������� ������ ������\n�� ���������!" << std::endl;
		}
		if (computer == 3)
		{
			std::cout << "�� ������� �������\n��������� ������ ������\n�� ��������!" << std::endl;
		}
	}
	else if (user == 3)
	{
		if (computer == 1)
		{
			std::cout << "�� ������� ������\n��������� ������ ������\n�� ��������!" << std::endl;
		}
		if (computer == 2)
		{
			std::cout << "�� ������� ������\n��������� ������ �������\n�� ���������!" << std::endl;
		}
	}

}