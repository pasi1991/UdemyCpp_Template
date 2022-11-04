#include "game.hpp"

    char direction;

    std::uint32_t playerPosition = start;

void printGameState(const std::uint32_t playerPosition)
{
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
}
bool isFinished(const std::uint32_t playerPosition)
{
    return playerPosition == goal;
}
void executeMove(std::uint32_t &playerPosition, const char move)
{
    if(move == left)
    {
        if(playerPosition > 0)
        {
        playerPosition--;
        }
    }
    else if(move == right)
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


    void game()
    {
        while (true)
        {
            if(isFinished(playerPosition))
            {
                std::cout << "You win!" << std::endl;
                break;
            }

            printGameState(playerPosition);

            std::cin >> direction;

            executeMove(playerPosition, direction);
        }
    }
