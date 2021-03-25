#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

int main()
{
    std::ofstream f;
        f.open("results.txt");
        float num1, num2, num3;
        cout << "Enter three numbers ";
        cin >> num1 >> num2 >> num3;
        float a = num1 * 2;
        float b = num2 - 3;
        float c = pow(num3,2);
        float d = a + b + c;
        f << "increased by two times " << a << endl
             << "reduced by three " << b << endl
             << "squaring " << c << endl
             << "the sum of the new three numbers " << d << endl;


       f.close();

    return 0;
}
