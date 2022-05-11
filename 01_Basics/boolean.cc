#include <iostream>

int main()
{
    int number;
    std::cout << "please enter a number" << std::endl;
    std::cin >> number;
    bool check = (number >= 0 && number <= 10);
    std::cout << std::boolalpha << check << std::endl;
    return 0;
}
