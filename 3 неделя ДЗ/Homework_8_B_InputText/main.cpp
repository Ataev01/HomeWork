#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

int main()
{
    std::ofstream f;
        f.open("results.txt");

        int x;
        cout << "Enter number x = ";
        cin >> x;
        int Z = abs(x)+pow(x,5);
        f << "x = " << Z << endl;

       f.close();

    return 0;
}
