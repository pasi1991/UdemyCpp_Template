#include "game.hpp"

    char direction;

    std::uint32_t playerPosition = start;

    void game()
    {
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
    }
