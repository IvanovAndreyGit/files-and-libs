#pragma once
#include "Triangle.h"
class TriangleSimple : public Triangle
{
public:
	TriangleSimple(int s_A, int s_B, int s_C, int c_A, int c_B, int c_C);
	void print() override;
};

