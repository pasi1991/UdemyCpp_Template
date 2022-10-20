#include <cstdint>
#include <iostream>


int main()
{

    std::uint32_t array1[] = {1, 4, 7, 12};
    std::uint32_t const len = sizeof(array1) / sizeof(array1[0]);
    std::uint32_t array2[len]{};



    for (std::uint8_t i = 0; i < len; i++)
    {
        array2[i] = array1[(len - i) - 1];
        std::cout << array2[i] << std::endl;
    }



    return 0;


}
