#include <iostream>

int array_maximum(int *array, unsigned int length)
{
    if(length == 0)
    {
        return 0;
    }

    int max_val = array[0];

    for (int i = 1; i < static_cast<int>(length); ++i)
    {
        if(max_val < array[i])
        {
            max_val = array[i];
        }
    }

    return max_val;
}


int main()
{
    unsigned int array_size = 10;

    // heap allocation

    int *p = new int[array_size];

    for(unsigned int i = 0; i < array_size; ++i)
    {
        p[i] = i;
    }


    int maximun = array_maximum(p, array_size);

    std::cout << maximun << std::endl;

    for(unsigned int i = 0; i < array_size; ++i)
    {
        std::cout << p[i] << std::endl;
    }

    delete[] p;


    return 0;
}
