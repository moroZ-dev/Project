#include <iostream>
#include <string>
#include <vector>

void split_word(std::string word, char letter)
{
	for (int i = 0; i < word.size(); i++)
	{
		if (word[i] == letter)
		{
			std::cout << letter << " ";
		}
		else
		{
			std::cout << "_ ";
		}
	}
}