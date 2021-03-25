#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    std::ofstream f;
        f.open("results.txt");

        int num1, num2, num3;
        int iMax;
        int iMin;

            cout << "Enter num 1" << endl;
            cin >> num1;
            cout << "Enter num 2" << endl;
            cin >> num2;
            cout << "Enter num 3" << endl;
            cin >> num3;
            iMax= num1;
            iMin= num1;
            if(num2>iMax)
                iMax = num2;
            if(num3>iMax)
                iMax = num3;
            if(num2<iMin)
                iMin = num2;
            if(num3<iMin)
                iMin = num3;

            f << "iMax = " << iMax + 5 << endl;
            f << "IMin = " << iMin - 3 << endl;

       f.close();

    return 0;
}
