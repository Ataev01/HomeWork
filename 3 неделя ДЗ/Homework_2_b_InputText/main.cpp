#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    std::ofstream f;
        f.open("results.txt");
        float a, b;
        cout << "Enter the parameter of the rectangle sides a= ";
        cin >> a;
        cout << "Enter the parameter of the rectangle sides b= ";
        cin >> b;
        float S = a*b;
        float P = 2*(a+b);
        f << "S= " << S << endl
             << "P= " << P << endl;


       f.close();

    return 0;
}
