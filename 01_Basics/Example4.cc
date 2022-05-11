#include <iostream>

int main()
{

    int year;
    std::cout << "Enter a year as integer!" << std::endl;
    std::cin >> year;

    bool isLeapYear = false;

    if (!(year % 4))
    {
        isLeapYear = true;
    }
    else if ((!(year % 100) && !(year % 400)))
    {
        isLeapYear = true;
    }
    else
    {
        isLeapYear = false;
    }

    std::cout << isLeapYear << std::endl;

    return 0;
}
