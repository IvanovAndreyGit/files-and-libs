
#include <iostream>
#include "Figure.h"
#include "Triangle.h"
#include "TriangleSimple.h"
#include "TriangleRht.h"
#include "TriangleIso.h"
#include "TriangleEq.h"
#include "Quadrangle.h"
#include "QuadrangleSimple.h"
#include "Rectangle.h"
#include "Square.h"
#include "Parallelogram.h"
#include "Rhombus.h"


void print_info(Figure* fig_info)
{
    fig_info->print();
}

int main()
{
    setlocale(LC_ALL, "Russian");
   
    TriangleSimple TS(10, 20, 30, 50, 60, 70);
    TriangleRht TR(10, 20, 30, 50, 60);
    TriangleIso TI(10, 20, 50, 60);
    TriangleEq TE(30, 60);

    TriangleSimple* ts = &TS;
    TriangleRht* tr = &TR;
    TriangleIso* ti = &TI;
    TriangleEq* te = &TE;

    print_info(ts);
    print_info(tr);
    print_info(ti);
    print_info(te);

    QuadrangleSimple QS(10, 20, 30, 40, 50, 60, 70, 80);
    Rectangle RT(10, 20);
    Square SQ(20);
    Parallelogram PL(20, 30, 30, 40);
    Rhombus RB(30, 30, 40);

    QuadrangleSimple* qs = &QS;
    Rectangle* rt = &RT;
    Square* sq = &SQ;
    Parallelogram* pl = &PL;
    Rhombus* rb = &RB;

    print_info(qs);
    print_info(rt);
    print_info(sq);
    print_info(pl);
    print_info(rb);
};


