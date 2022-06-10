// ДЗ до 25.05.2022 ООП Встреча №1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "Fractions.cpp"
#include"Complex.cpp"


int main()
{
    Fractions<int, string> point1(1, 4);
    Fractions<int, string> point2(1, 2);
    Fractions<int, string> point3;
    point3 = point1 + point2 * point2 - point1;
    Complex<float, string>k(3, 4);
    Complex<float, string>k2(1, 1);
    Complex<float, string> k3;
    k3 = k / k2;
    k3.show();

}

