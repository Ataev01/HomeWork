#include <iostream>
#include <math.h>

/*Вариант 2 Задание №2. Пользователь вводит параметры фигуры. Найти периметр и площадь фигур: b. Прямоугольник */
using namespace std;

int main()
{
    float a, b;
    cout << "Enter the parameter of the rectangle sides a= ";
    cin >> a;
    cout << "Enter the parameter of the rectangle sides b= ";
    cin >> b;
    float S = a*b;
    float P = 2*(a+b);
    cout << "S= " << S << endl
         << "P= " << P << endl;
    return 0;
}
