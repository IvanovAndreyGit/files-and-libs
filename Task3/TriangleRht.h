#pragma once
#include "Triangle.h"
class TriangleRht : public Triangle
{
public:
	TriangleRht(int s_A, int s_B, int s_C, int c_A, int c_B);
	void print() override;
};

