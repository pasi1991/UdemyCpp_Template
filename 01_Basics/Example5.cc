#include <iostream>

// User-Input: integer number
// Compute if the number is a prime number
// print out the result

// Prime Number: Only divisivle by itself and 1 with a remainder of 0

int main()
{
    bool isPrime = true;
    int number;
    std::cout << "Please enter a number: ";
    std::cin >> number;

    for (int i = 2; i < number; i++)
    {
        if (number % i == 0)
        {
            isPrime = false;
        }
    }

    if (isPrime)
    {
        std::cout << "is a prime number!" << std::endl;
    }
    else
    {
        std::cout << "is not a prime number!" << std::endl;
    }


    return 0;
}
