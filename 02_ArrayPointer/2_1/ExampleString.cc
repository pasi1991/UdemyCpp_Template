#include <cstdint>
#include <iostream>


int main()
{

    char array[] = "Hello World!";
    std::uint32_t len = 0;

    while(true)
    {
        if(array[len] != '\0')
        {
            ++len;
        }
        else
        {
            break;
        }
    }

    std::cout << "len is: " << len << std::endl;


    return 0;


}
