#include "TriangleSimple.h"

TriangleSimple::TriangleSimple(int s_A, int s_B, int s_C, int c_A, int c_B, int c_C)
{
        sideA = s_A;
        sideB = s_B;
        sideC = s_C;
        cornA = c_A;
        cornB = c_B;
        cornC = c_C;
}

void TriangleSimple::print()
{
	std::cout << "Треугольник:" << std::endl;
	tiangle_info();
}

