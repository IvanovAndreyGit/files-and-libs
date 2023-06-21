#include "Square.h"

Square::Square(int s_A)
{
    sideA = sideB = sideC = sideD = 20;
    cornA = cornB = cornC = cornD = 90;
}

void Square::print()
{
    std::cout << " вадрат:" << std::endl;
    quadrangle_info();
}
