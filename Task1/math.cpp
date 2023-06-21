#include "math.h"

void sum(int a, int b)
{
    std::cout << a << " плюс " << b << " = " << a + b << std::endl;
}

void sub(int a, int b)
{
    std::cout << a << " минус " << b << " = " << a - b << std::endl;
}

void mult(int a, int b)
{
    std::cout << a << " умножить " << b << " = " << a * b << std::endl;
}

void divis(int a, int b)
{
    std::cout << a << " делить " << b << " = " << a / b << std::endl;
}

void pwr(int a, int b)
{
    std::cout << a << " в степени " << b << " = " << pow(a, b) << std::endl;
}
