#include <iostream>
#include <random>

int randomChoose()
{
	srand(static_cast<unsigned int>(time(0)));
	static const double fraction = 1.0 / (static_cast<double>(RAND_MAX) + 1.0);
	// Равномерно распределяем рандомное число в нашем диапазоне
	int y;
	for (int i = 0; i < 10; i++)
	{
		y = static_cast<int>(rand() * fraction * (3 - 1 + 1) + 1);
	}
	return y;
}