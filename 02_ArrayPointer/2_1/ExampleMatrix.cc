#include <cstdint>
#include <iostream>


int main()
{
    constexpr static std::uint32_t num_rows = 3;
    constexpr static std::uint32_t num_cols = 2;

    std::uint32_t array1[num_rows][num_cols] = {{1, 2},{3, 4},{5, 6}};
    std::uint32_t columns_sum[num_cols]{};

    for (std::uint8_t i = 0; i < num_rows; i++)
    {
        for (std::uint8_t j = 0; i < num_cols; i++)
        {
            columns_sum[j] += array1[i][j];
        }

    }

    for (size_t i = 0; i < num_rows; i++)
    {
        std::cout << "Sum at column " << i << " = " << columns_sum[i] << std::endl;
    }


    return 0;

}
