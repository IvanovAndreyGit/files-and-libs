#include "Parallelogram.h"

Parallelogram::Parallelogram(int s_A, int s_B, int c_A, int c_B)
{
    sideA = sideC = s_A;
    sideB = sideD = s_B;
    cornA = cornC = c_A;
    cornB = cornD = c_B;
}

void Parallelogram::print()
{
    std::cout << "ֿאנאככוכמדנאלל:" << std::endl;
    quadrangle_info();
}
