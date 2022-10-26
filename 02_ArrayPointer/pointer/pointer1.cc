#include <iostream>

int main()
{
    int number = 5;
    std::cout << "Value of number: " << number << std::endl;
    std::cout << "Adress of number: " << &number << std::endl;

    int *p = &number;

    std::cout << "Value of p: " << p << std::endl;
    std::cout << "Adress of p: " << &p << std::endl;
    std::cout << "Value of number: " << *p << std::endl;

    // Heap allocation

    int *p2 = new int{4};

    std::cout << "Adress of p: " << &p2 << std::endl;
    std::cout << "Adress of pointed value: " << p2 << std::endl;
    std::cout << "Value of the adress p points to: " << *p2 << std::endl;

    // Heap deallocation

    delete p;



    return 0;
}
