#include <iostream>
#include <cmath>

using namespace std;

/*Вариант 2 Задание №8. Вычислите значение выражения:b. |x| + x^5, если x=−2. Ответ: -30 */

int main()
{
    int x;
    cout << "Enter number x = ";
    cin >> x;
    int Z = abs(x)+pow(x,5);
    cout << "x = " << Z << endl;
    return 0;
}
