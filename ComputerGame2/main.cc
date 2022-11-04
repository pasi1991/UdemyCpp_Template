#include <iostream>
#include <stdlib.h>

int main()
{

    std::uint32_t length = 10;
    std::uint32_t start = 0;
    std::uint32_t goal = 9;

    char left = 'a';
    char right = 'd';

    char direction;

    std::uint32_t playerPosition = start;

    while (true)
    {
        if(playerPosition == goal)
        {
            std::cout << "You win!" << std::endl;
            break;
        }

        for(std::uint32_t i = 0; i < length; i++)
        {
            if(i == playerPosition)
            {
                std::cout << "P";
            }
            else if( i == length -1)
            {
                std::cout << "|";
            }
            else
            {
                std::cout << ".";
            }
        }

        std::cin >> direction;

        if(direction == left)
        {
            if(playerPosition > 0)
            {
            playerPosition--;
            }
        }
        else if(direction == right)
        {
            if(playerPosition < 10)
            {
                playerPosition++;
            }
        }
        else
        {
            std::cout << "unkown direction!" << std::endl;
        }
    }

    return 0;
}
