# include <iomanip>
#include <windows.h>
#include <iostream>
#include "zav_1.h"
#include "zav_2.h"
#include "zav_3.h"
using namespace std;

void full()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    char check;
    int num;
    while (true)
    {
        cout << "Enter '!', to exit or any other character to continue: ";
        cin >> check;
        if (check == '!') break;
        else
        {
            cout << "Enter task number (from 1 to 4): ";
            cin >> num;
            switch (num)
            {
            case 1: zav_1(); break;
            case 2: zav_2(); break;
            case 3: zav_3(); break;
            default: cout << "There is no task with this number" << endl; break;
            }
        }
    }
}
