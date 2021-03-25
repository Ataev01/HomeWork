#include <iostream>
#include <cmath>

using namespace std;

/*Варивант 2 Задание №5. Пользователь вводит три числа. Увеличьте первое число в два раза, второе число
уменьшите на 3, третье число возведите в квадрат и затем найдите сумму новых
трех чисел.*/

int main()
{

    float num1, num2, num3;
    cout << "Enter three numbers ";
    cin >> num1 >> num2 >> num3;
    float a = num1 * 2;
    float b = num2 - 3;
    float c = pow(num3,2);
    float d = a + b + c;
    cout << "increased by two times " << a << endl
         << "reduced by three " << b << endl
         << "squaring " << c << endl
         << "the sum of the new three numbers " << d << endl;
    return 0;
}
