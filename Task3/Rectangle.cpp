#include "Rectangle.h"

Rectangle::Rectangle(int s_A, int s_B)
{
    sideA = sideC = s_A;
    sideB = sideD = s_B;
    cornA = cornB = cornC = cornD = 90;
}
void Rectangle::print()
{
    std::cout << "Прямоугольник:" << std::endl;
    quadrangle_info();
}