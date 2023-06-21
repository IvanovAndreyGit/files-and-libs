#include "TriangleRht.h"

TriangleRht::TriangleRht(int s_A, int s_B, int s_C, int c_A, int c_B)
{
        sideA = s_A;
        sideB = s_B;
        sideC = s_C;
        cornA = c_A;
        cornB = c_B;
        cornC = 90;  
}
void TriangleRht::print()
{
    std::cout << "Прямоугольный треугольник:" << std::endl;
    tiangle_info();
}