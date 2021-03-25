#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    std::ofstream f;
        f.open("results.txt");

        f << "*****      *****" << endl;
        f << "***  **  **  ***" << endl;
        f << "***    **    ***" << endl;
        f << "***          ***" << endl;
        f << "***          ***" << endl;


       f.close();

    return 0;
}
