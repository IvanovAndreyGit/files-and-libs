#include "Rhombus.h"

Rhombus::Rhombus(int s_A, int c_A, int c_B)
{
    sideA = sideB = sideC = sideD = s_A;
    cornA = cornC = c_A;
    cornB = cornD = c_B;
}

void Rhombus::print()
{
    std::cout << "Ромб:" << std::endl;
    quadrangle_info();
}
