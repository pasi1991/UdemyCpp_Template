#include <iostream>
#include <stdlib.h>

int main()
{

    char left = 'a';
    char right = 'd';

    char direction;

    std::cout << "choose your direction!" << std::endl;
    std::cin >> direction;

    if(direction == left)
    {
        std::cout << "move left" << std::endl;
    }
    else if(direction == right)
    {
        std::cout << "move right" << std::endl;
    }
    else
    {
        std::cout << "unkown direction" << std::endl;
    }

    return 0;
}
