#pragma once
#include "Quadrangle.h"
class Parallelogram : public Quadrangle
{
public:
	Parallelogram(int s_A, int s_B, int c_A, int c_B);
	void print() override;
};

