#include <iostream>

#include "AlgoArray.h"
#include "DynArray.h"

int main()
{
    double fill_value = 1.0;
    std::size_t length = 6;

    DynamicArray my_array = create_dynamic_array(fill_value, length);

    for (std::size_t i = 0; i < length; i++)
    {
        my_array.m_data[i] = static_cast<double>(i);
    }
    my_array.m_data[5] = 6;

    std::cout << "Mean = " << mean(my_array) << std::endl;
    std::cout << "Median = " << median(my_array) << std::endl;

    return 0;
}
