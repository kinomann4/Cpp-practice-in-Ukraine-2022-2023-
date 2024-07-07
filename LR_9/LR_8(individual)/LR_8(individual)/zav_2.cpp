# include <iomanip>
#include <windows.h>
#include <iostream>
#include "rand_f.h"
using namespace std;

void zav_2()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int sumc = 0, jc = 0, amountc = 0, min_elc = 50, min = -5, max = 48;
    cout << "Generated sequence: " << endl;
    while (jc < 10)
    {
        int recc = getRandomNumber(-5, 48);
        cout << "\t" << recc;
        if (recc % 2 == 1) sumc += recc; amountc += 1;
        if (recc < min_elc)
        {
            min_elc = recc;
            jc += 1;
        }
        else jc += 1;
    }
    cout << endl << "Sum of all odd elements: " << sumc << ", and their count: " << amountc << endl;
    cout << "Minimum element in the sequence: " << min_elc << endl;
}
