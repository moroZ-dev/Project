#include <iostream>
#include <string>
#include <array>


std::string word(int x)
{
	std::array<std::string, 5> array_words = { "home", "cat", "computer", "processor", "programming" };

	return array_words[x];
}