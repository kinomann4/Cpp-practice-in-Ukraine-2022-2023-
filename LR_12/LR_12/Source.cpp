#include <iomanip>
#include <windows.h>
#include <iostream>
#include <math.h>
using namespace std;

// Function for Task 1
void count1(int a, int b, int c, int e, float arr[18], bool& p)
{
    int x;
    for (int i = 0; i < 18; i++)
    {
        arr[i] = (a * pow(e, 2)) + (b * e) + c;
        x = pow(b, 2) - (4 * a * c);
        if (x > 0 || x < 0) p = true;
        else p = false;
        e += 1;
    }
}

// Function for Task 2
void findMaxMin(int sq[], int pop[])
{
    int maxIn = 0, minIn = 0;
    for (int i = 1; i < 6; i++)
    {
        if (pop[i] > pop[maxIn]) maxIn = i;
        if (pop[i] < pop[minIn]) minIn = i;
    }
    cout << "The most populated region has a population of " << pop[maxIn] << " people and an area of " << sq[maxIn] << " km^2" << endl;
    cout << "The least populated region has a population of " << pop[minIn] << " people and an area of " << sq[minIn] << " km^2" << endl;
}

// Function for Task 3
int countZeros(int arr[4][4])
{
    int zeroCount = 0;
    for (int i = 0; i < 4; i++)
    {
        for (int j = i + 1; j < 4; j++)
        {
            if (arr[i][j] == 0) zeroCount++;
        }
    }
    return zeroCount;
}

// Function for Task 4
void filling(int arr[][7], const int size)
{
    bool r = true;
    int dop = 0;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            if (r) arr[i - j][j] = dop++;
            else arr[j][i - j] = dop++;
        }
        if (r) r = false;
        else r = true;
    }
    for (int i = size - 2; i >= 0; i--)
    {
        for (int j = i; j >= 0; j--)
        {
            if (r) arr[size - 1 - (i - j)][size - 1 - (j)] = dop++;
            else arr[size - 1 - (j)][size - 1 - (i - j)] = dop++;
        }
        if (r) r = false;
        else r = true;
    }
}

// Function for Task 5
void func5(int arr[][10], const int size, int num)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            arr[i][j] = 0;
        }
    }
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (i < size - 1 - j || j < size - 1 - i)
            {
                if (i % 2 != 0) arr[i][size - j - 2 - i] = num++;
                else arr[i][j] = num++;
            }
        }
    }
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }
}

int main()
{
    SetConsoleCP(1251);  // Set console input code page for Cyrillic
    SetConsoleOutputCP(1251);  // Set console output code page for Cyrillic

    int number;
start:
    cout << "Enter task number (from 1 to 5, 0 - to exit): ";
    cin >> number;

    switch (number)
    {
        while (true)
        {
    case 1:
    {
        // Task 1
        int const n = 18;
        int a = 2, b = 7, c = 12, e;
        bool pres = false;
        float Y[18];
        cout << "Enter the initial value of the segment on which to calculate 18 values of the function: ";
        cin >> e;
        count1(a, b, c, e, Y, pres);
        cout << "Computed array: " << endl;
        for (int i = 0; i < 18; i++)
        {
            cout << Y[i] << "   ";
        }
        string text = (pres == true) ? "has solutions" : "has no solutions";
        cout << endl << "If solving this equation on the specified interval, it " << text << endl;
        goto start;
    }
    case 2:
    {
        // Task 2
        int Square[6] = { 33310,  31914, 31865, 31415, 29832, 28748 };
        int Population[6] = { 2351392,  3096485, 959315, 2598961, 1179032, 1352283 };
        findMaxMin(Square, Population);
        goto start;
    }
    case 3:
    {
        // Task 3
        int arr[4][4] = { {1, 0, 0, 0},
                          {2, 3, 0, 0},
                          {4, 5, 6, 0},
                          {7, 8, 9, 10} };
        int zeroCount = countZeros(arr);
        cout << "Number of zeros above the main diagonal: " << zeroCount << endl;
        goto start;
    }
    case 4:
    {
        // Task 4
        int array[7][7];
        filling(array, 7);
        for (int i = 0; i < 7; ++i)
        {
            for (int j = 0; j < 7; ++j)
            {
                cout << array[i][j] << "\t";
            }
            cout << endl;
        }
        goto start;
    }
    case 5:
    {
        // Task 5
        const int N = 10;
        int number = 1;
        int mass[N][N];
        func5(mass, N, number);
        goto start;
    }
    case 0:
        break;
    default:
        cout << "Task number does not exist" << endl;
        goto start;
        }
    }

    return 0;
}

//Task 1 (count1) : Computes 18 values of a quadratic function based on provided coefficients(a, b, c) 
//and increments of e.It also determines if the quadratic equation has real solutions(p).
//Task 2 (findMaxMin) : Finds the maximum and minimum values in arrays representing square 
//kilometers(Square) and population(Population) of regions.
//Task 3 (countZeros) : Counts zeros above the main diagonal in a 4x4 matrix(arr).
//Task 4 (filling) : Fills a 7x7 matrix(arr) with numbers in a zigzag pattern.
//Task 5 (func5) : Fills a 10x10 matrix(mass) with numbers in a specific diagonal and anti - diagonal pattern.