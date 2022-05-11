#include <iostream>

int main()
{
    float sideLenght = 0.0;
    std::cout << "Enter the side length: ";
    std::cin >> sideLenght;

    float perimeter = sideLenght * 4.0f;
    float area = sideLenght * sideLenght;

    std::cout << "Perimeter is: " << perimeter << " and area is: " << area << std::endl;
}
