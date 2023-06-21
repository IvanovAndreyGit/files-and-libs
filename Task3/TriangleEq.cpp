#include "TriangleEq.h"

TriangleEq::TriangleEq(int s_A, int c_A)
{
	sideA = sideB = sideC = s_A;
	cornA = cornB = cornC = c_A;
}
void TriangleEq::print()
{
    std::cout << "Равносторонний треугольник:" << std::endl;
    tiangle_info();
}