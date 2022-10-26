#include <iostream>

int main()
{
    std::int32_t *p = new std::int32_t{4};

    if(p != nullptr)
    {
        std::cout << p << std::endl;
        std::cout << *p << std::endl;
    }
    else
    {
        std::cout << "p does not own the memory" << std::endl;
    }

    delete p;
    p = nullptr;

    if(p != nullptr)
    {
        std::cout << p << std::endl;
        std::cout << *p << std::endl;
    }
    else
    {
        std::cout << "p does not own the memory" << std::endl;
    }


    return 0;


}
