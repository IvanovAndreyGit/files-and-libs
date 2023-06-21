#pragma once
#include "Figure.h"
class Triangle : public Figure
{
protected:
    int sideA;
    int sideB;
    int sideC;
    int cornA;
    int cornB;
    int cornC;
    void tiangle_info();
};

