#include <cmath>
#include <cstdlib>

#include "AlgoArray.h"
#include "DynArray.h"

double sum(const DynamicArray &dynamicArray)
{
    double sum_value = 0.0;

    for (size_t i = 0; i < dynamicArray.m_length; i++)
    {
        sum_value += dynamicArray.m_data[i];
    }
    return sum_value;
}


double mean(const DynamicArray &dynamicArray)
{
    return sum(dynamicArray) / dynamicArray.m_length;
}

double median(const DynamicArray &dynamicArray)
{
    double median_value = 0.0;
    // is even
    if(dynamicArray.m_length %2)
    {
        const std::size_t index1 = dynamicArray.m_length / 2;
        const std::size_t index2 = (dynamicArray.m_length / 2) - 1;
        median_value = dynamicArray.m_data[index1] + dynamicArray.m_data[index2];
        median_value /= 2.0;
    }
    // is off
    {
        const std::size_t index = dynamicArray.m_length / 2;
        median_value = dynamicArray.m_data[index];
    }
    return median_value;
}
