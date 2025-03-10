#include <iostream>
#include <string>
#include <vector>

#include "Header.h"

int main()
{
    int foult = 0;
    std::string choose_word = word(randomChoose());
    std::cout << "Let`s try to guess!\n";
    convert_word(choose_word);
    std::vector<char> let_word;
    int choose_let = 0;

    while (foult < 5)
    {
        for (int i = 0; i < choose_word.size(); i++)
        {
            let_word.push_back('_');
        }

        char letter = get_letter();

        int good = 0;

        for (int i = 0; i < choose_word.size(); i++)
        {
            if (letter == choose_word[i])
            {
                let_word[i] = letter;
                good++;
                choose_let++;
            }
        }

        if (good == 0)
        {
            foult++;
            std::cout << "You have " << 5 - foult << " mistakes" << std::endl;
        }

        for (int i = 0; i < choose_word.size(); i++)
        {
            std::cout << let_word[i] << " ";
        }

        if (choose_let == choose_word.size())
        {
            std::cout << "\nYou win!";
            break;
        }
    }
}
