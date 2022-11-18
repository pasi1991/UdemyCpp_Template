#include "game.hpp"

    char direction;

    std::uint32_t playerPositionX = start;
    std::uint32_t playerPositionY = start;

void printGameState(const std::uint32_t playerPositionX, const std::uint32_t playerPositionY)
{
    for(std::uint32_t i = 0; i < length; i++)
    {
        for(std::uint32_t j = 0; j < length; j++)
        {
            if(i == playerPositionX && j == playerPositionY)
            {
                std::cout << "P";
            }
            else if( j == length -1)
            {
                std::cout << "|";
            }
            else
            {
                std::cout << ".";
            }
        }
        std::cout << "" << std::endl;
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
            // if(isFinished(playerPosition))
            // {
            //     std::cout << "You win!" << std::endl;
            //     break;
            // }

            printGameState(playerPositionX, playerPositionY);

            std::cin >> direction;

            //executeMove(playerPosition, direction);
        }
    }
