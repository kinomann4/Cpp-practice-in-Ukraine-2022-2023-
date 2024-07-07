#include <iomanip>
#include <windows.h>
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    // Task 1
    /*
    float i, n;
    double res, sum = 0;
    cout << "Enter the number of iterations: ";
    cin >> n;
    if (n >= 1)
    {
        i = 1;
        while (i <= n)
        {
            res = 1/i*(2*i+1);
            sum += res;
            cout << "Number at step: " << i << " is: " << res << endl;
            i += 1;
        }
        cout << endl << "Result = " << sum << endl << endl;
    }
    else cout << "Number of iterations not specified!" << endl << endl;
    */

    // Task 2
    /*
    float i_2, n_2;
    double res_2, pi = 3.14159, pro = 1, x;
    cout << "Enter the number of iterations: ";
    cin >> n_2;
    cout << "Enter the value of x: ";
    cin >> x;
    if (n_2 >= 1)
    {
        i_2 = 1;
        while (i_2 <= n_2)
        {
            res_2 = sin(pi / pow(x, i_2 + 1));
            pro *= res_2;
            cout << "Number at step: " << i_2 << " is: " << res_2 << endl;
            i_2 += 1;
        }
        cout << endl << "Result = " << pro << endl << endl;
    }
    else cout << "Number of iterations not specified!" << endl << endl;
    */

    // Task 3
    /*
    float n_3 = 0;
    double prev = 0, now = 0, e = 0.00005;
    cout << "Enter the coefficient n: ";
    cin >> n_3;
    now = 1/3;
    while (true)
    {
        now += 1/((2*n_3-1)*(2 * n_3 + 1));
        if (now - prev <= e) break;
        else prev = now;
        n_3 += 1;
    }
    cout << "Sum result: " << now;
    */

    // Task 4
    float j = 2, k;
    double P = 1, R, num, denum_1, denum_2 = 1;
    cout << "Enter the value of k: ";
    cin >> k;
    while (j <= k)
    {
        if (j == 6 || j == 3 || j == 1 || j == 0)
        {
            j += 1;
            continue;
        }
        else
        {
            num = (j - 6.0) * j;
            denum_1 = (j - 1.0);
            for (float iter = 1; iter <= denum_1; iter += 1)
            {
                denum_2 *= iter;
            }
            P *= num / (denum_2 * (j - 3));
            j += 1;
        }
    }
    cout << "The product value is: " << P;
    return 0;
}