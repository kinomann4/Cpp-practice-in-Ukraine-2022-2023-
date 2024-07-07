#include <iomanip>
#include <windows.h>
#include <iostream>
#include <math.h>
using namespace std;

int zav_1(int n)
{
    if (n == 0) return 0;
    if (n == 1) return 1;
    return n * zav_1(n - 1);
}

int zav_2(int n, int a = 0, int b = 1)
{
    if (n == 0)  return a;
    if (n == 1)
    {
        cout << a << " ";
        return b;
    }
    cout << a << " ";
    return zav_2(n - 1, b, a + b);
}

double zav_3(double x, int n)
{
    if (n == 0)
    {
        return 1.0;
    }
    if (n < 0)
    {
        x = 1.0 / x;
        n = -n;
    }
    double result = zav_3(x, n - 1);
    return x * result;
}

void zav_4(int n, int& count, int& sum)
{
    if (n == 0)
    {
        return;
    }
    int digit = n % 10;
    count++;
    sum += digit;
    std::cout << digit;
    zav_4(n / 10, count, sum);
}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int choise;
again:
    cout << "Enter task number (0 - to exit): ";
    cin >> choise;
    switch (choise)
    {
    case 1:
    {
        int n;
        cout << "Enter the number to find its factorial: ";
        cin >> n;
        cout << "The factorial is: " << zav_1(n) << endl;
    } goto again;
    case 2:
    {
        int nums = 18;
        cout << "Sequence of 18 Fibonacci numbers: " << endl;
        zav_2(nums);
        cout << endl;
    } goto again;
    case 3:
    {
        int d, c;
        cout << "Enter the number to raise to a power: ";
        cin >> d;
        cout << "Enter the power: ";
        cin >> c;
        cout << zav_3(d, c) << endl;
    } goto again;
    case 4:
    {
        int number;
        cout << "Enter the number: ";
        cin >> number;
        int digitCount = 0;
        int digitSum = 0;
        cout << "In reverse order: ";
        zav_4(number, digitCount, digitSum);
        cout << "\nNumber of digits: " << digitCount << endl;
        cout << "Sum of digits: " << digitSum << endl;
    } goto again;
    case 0: break;
    default: cout << "This task does not exist (not done). Try again. " << endl;
    }
    return 0;
}
