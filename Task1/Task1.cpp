
#include <iostream>
#include "math.h"

int main()
{
    setlocale(LC_ALL, "ru");
    int n1;
    int n2;
    int opr;
    std::cout << "Введите первое число: ";
    std::cin >> n1;
    std::cout << "Введите второе число: ";
    std::cin >> n2;
    std::cout << "Выберите операцию (1 - сложение, 2 вычитание, 3 - умножение, 4 - деление, 5 - возведение в степень): ";
    std::cin >> opr;
    switch (opr)
    {
    case 1: sum(n1, n2); 
        break;
    case 2: sub(n1, n2);
        break;
    case 3: mult(n1, n2);
        break;
    case 4: divis(n1, n2);
        break;
    case 5: pwr(n1, n2);
        break;
    default:
        break;
    }
}

