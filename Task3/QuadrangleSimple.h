#pragma once
#include "Quadrangle.h"
class QuadrangleSimple : public Quadrangle
{
public:
	QuadrangleSimple(int s_A, int s_B, int s_C, int s_D, int c_A, int c_B, int c_C, int c_D);
	void print() override;
};

