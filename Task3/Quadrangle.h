#pragma once
#include "Figure.h"
class Quadrangle : public Figure
{
protected:
    int sideA;
    int sideB;
    int sideC;
    int sideD;
    int cornA;
    int cornB;
    int cornC;
    int cornD;
    void quadrangle_info();
};

