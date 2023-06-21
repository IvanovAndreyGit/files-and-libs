#include "QuadrangleSimple.h"

QuadrangleSimple::QuadrangleSimple(int s_A, int s_B, int s_C, int s_D, int c_A, int c_B, int c_C, int c_D)
{
    sideA = s_A;
    sideB = s_B;
    sideC = s_C;
    sideD = s_D;
    cornA = c_A;
    cornB = c_B;
    cornC = c_C;
    cornD = c_D;
}
void QuadrangleSimple::print()
{
    std::cout << "Четырёхугольник:" << std::endl;
    quadrangle_info();
}