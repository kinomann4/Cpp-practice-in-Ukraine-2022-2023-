#include <iomanip>
#include <windows.h>
#include <iostream>
#include <cmath> // Include cmath for mathematical functions like acos, asin, and tan
using namespace std;

void zav_3()
{
    SetConsoleCP(1251);         // Set console input to CP1251 encoding (Cyrillic)
    SetConsoleOutputCP(1251);   // Set console output to CP1251 encoding (Cyrillic)

    float xc;
    int kc = 0;

    cout << "Computing the tangent of three entered angles" << endl;

    while (kc < 3)
    {
        cout << "Enter the angle in radians: ";
        cin >> xc;

        // Calculate and display the tangent
        float tangent_value = tan(xc);

        cout << "Tangent value of the angle is: " << tangent_value << endl;

        kc += 1;
    }
}