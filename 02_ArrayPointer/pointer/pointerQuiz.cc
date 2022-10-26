#include <iostream>

int main()
{
    int a = 1;
    int b = 2;
    int c = 3;

    int *p_d = &a;
    int *p_e = &b;
    int *p_f = &c;

    *p_d = (2 * (*p_e)) + (3* (*p_f));
    p_d = &b;
    p_f = &a;

    *p_e = *p_d + *p_f;

    std::cout << a << std::endl; // 13
    std::cout << *p_d << std::endl; // 15
    std::cout << *p_e << std::endl; // 15
    std::cout << *p_f << std::endl; // 13
}
