#include <iostream>
#include <stdlib.h>

#define LENX 10u
#define LEFT 'a'
#define RIGHT 'd'

int main()
{

    bool repeat = true;

    while (repeat)
    {
        unsigned int playerPosition = 0;
        unsigned int start = 0;
        unsigned int goal = LENX - 1;

        char move;
        bool finished = false;

        while (!finished)
        {
            for (unsigned int i = 0; i < LENX; i++)
            {
                if (i != start && i != goal && i != playerPosition)
                {
                    std::cout << '.';
                }
                else if (i == playerPosition)
                {
                    std::cout << 'P';
                }
                else
                {
                    std::cout << '|';
                }
            }

            std::cin >> move;
            system("clear");

            if (LEFT == move)
            {
                if (playerPosition > start)
                {
                    playerPosition--;
                    std::cout << "You moved to the left!" << std::endl;
                }
                else
                {
                    std::cout << "You bounced!" << std::endl;
                }
            }
            else if (RIGHT == move)
            {
                if (playerPosition < goal)
                {
                    playerPosition++;
                    std::cout << "You moved to the right!" << std::endl;
                }
                else
                {
                    std::cout << "You bounced!" << std::endl;
                }
            }
            else
            {
                std::cout << "wrong input!" << std::endl;
            }

            if (playerPosition == goal)
            {
                finished = true;
                std::cout << "YOU WON" << std::endl;
            }
        }

        std::cout << "Play again? (0=No, 1=Yes)" << std::endl;
        std::cin >> repeat;

        system("clear");
    }


    return 0;
}
