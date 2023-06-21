#pragma once
#include "Triangle.h"
class TriangleIso : public Triangle
{
public:
	TriangleIso(int s_A, int s_B, int c_A, int c_B);
	void print() override;
};

