#include "TriangleIso.h"

TriangleIso::TriangleIso(int s_A, int s_B, int c_A, int c_B)
{
    sideA = s_A;
    sideB = s_B;
    sideC = sideA;
    cornA = c_A;
    cornB = c_B;
    cornC = cornA;
}
void TriangleIso::print()
{
    std::cout << "Равнобедренный треугольник :" << std::endl;
    tiangle_info();
}