#include <iostream>

int main()
{

    bool hasWon = false;

    do
    {
        int number;
        std::cout << "please enter your number: ";
        std::cin >> number;

        if (number >= 0 && number <= 10)
        {
            if (number == 4)
            {
                std::cout << "You win!" << std::endl;
                hasWon = true;
            }
            else if (number % 2 == 0)
            {
                std::cout << "Wooden Spoon!" << std::endl;
            }
            else
            {
                std::cout << "You lose!" << std::endl;
            }
        }
    } while (hasWon == false);
    std::cout << 23 % 5 << std::endl;

    return 0;
}
