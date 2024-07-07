# include <iomanip>
#include <windows.h>
#include <iostream>
#include <math.h>
using namespace std;

void zav_1()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int ic;
    cout << "Enter the number of repetitions (integer): ";
    cin >> ic;
    while (ic > 0)
    {
        cout << "% % %" << endl << "%   %" << endl << "% % %" << endl << "-----" << endl;
        ic -= 1;
    }
    cout << endl << endl;
}
