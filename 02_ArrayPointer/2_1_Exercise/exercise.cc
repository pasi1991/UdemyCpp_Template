#include <iostream>

#include "exercise.h"

// Exercise 1
double array_sum(const double *p_array, const unsigned int &length)
{
    double sum = 0.0;
    for(unsigned int i = 0; i < length; ++i)
    {
        sum += p_array[i];
    }

    return sum;
}

// Exercise 2
int *array_constructor(const int &value, const unsigned int &length)
{
    int *array = new int[length];
    for(unsigned int i = 0; i < length; ++i)
    {
        array[i] = value;
    }
    return array;
}

int main()
{

unsigned int array_length = 100U;

double *array = new double[array_length];

for(unsigned int i = 0; i < array_length; ++i)
{
    array[i] = i;
}

unsigned int sum = array_sum(array, array_length);

std::cout << "sum of array is: " << sum << std::endl;

int* array2 = array_constructor(5, 100U);

for(unsigned int i = 0; i < 100U; ++i)
{
    std::cout << array2[i] << std::endl;
}


}
