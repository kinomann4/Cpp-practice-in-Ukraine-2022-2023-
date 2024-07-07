#include <iomanip>
#include <windows.h>
#include <iostream>
#include <math.h>
#include <cstdlib>
#include <ctime>
using namespace std;

// Function for Task 1
int zav_1(int a[10])
{
    int max_idx = 0;
    int max_val = a[max_idx];
    for (int i = 1; i < 10; i++)
    {
        if (a[i] > max_val)
        {
            max_val = a[i];
            max_idx = i;
        }
    }
    int temp = a[0];
    a[0] = max_val;
    a[max_idx] = temp;
    return 0;
}

// Function for generating random numbers for Task 2
int random(int& fir, int& sec)
{
    float res;
    do
    {
        res = fir + static_cast <float> (rand()) / (static_cast <float> (RAND_MAX / (sec - fir)));
    } while (res < fir || res > sec);
    return res;
}

// Function for Task 2
float diff(int a[15])
{
    float prod_pos = 1, prod_neg = 1;
    for (int i = 0; i < 15; i++)
    {
        if (a[i] > 0)
            prod_pos *= a[i];
        else
            prod_neg *= fabs(a[i]);
    }
    return prod_pos - prod_neg;
}

// Function for Task 3
void calculation(float a[2][3])
{
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            a[i][j] = (j * fabs(2 - 3.1 * i)) * sqrt(fabs((pow(i, 2) + pow(j, 2)) * (i - 1.5) * (j - 4.2)));
            cout << a[i][j] << "         ";
        }
        cout << endl;
    }
}

// Function for Task 4
void average(int a[5][6])
{
    float ava[6] = { 0 };
    int count[6] = { 0 };

    for (int j = 0; j < 6; j++)
    {
        for (int i = 0; i < 5; i++)
        {
            if (a[i][j] > 0)
            {
                ava[j] += a[i][j];
                count[j]++;
            }
        }
        ava[j] /= count[j];
        cout << ava[j] << "\t";
    }
}

// Function for Task 5
void min_sum(int a[4][4])
{
    int sum[4] = { 0 }, line = 0, min;
    min = 100000;
    cout << "Array of row sums: " << endl;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            sum[i] += a[i][j];
        }
        if (sum[i] < min)
        {
            min = sum[i];
            line = i + 1;
        }
        cout << sum[i] << "\t";
    }
    cout << endl << "The minimum sum is in the row number " << line;

}

int main()
{
    SetConsoleCP(1251);  // Set console input code page for Cyrillic
    SetConsoleOutputCP(1251);  // Set console output code page for Cyrillic

    // Task 1
    /*int mas_1[10];
    for (int i = 0; i < 10; i ++)
    {
        cout << "Enter element " << i + 1 << ": ";
        cin >> mas_1[i];
    }
    zav_1(mas_1);
    cout << "Modified array: " << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << mas_1[i] << "\t";
    }*/

    // Task 2
    /*int mas_2[15];
    int fir = -100, sec = 100;
    cout << "Generated array: " << endl;
    for (int i = 0; i < 15; i++)
    {
        mas_2[i] = random(fir, sec);
        cout << mas_2[i] << "\t";
    }
    cout << endl << "Difference between the product of all positive elements and the product of the moduli of all negative elements: " << diff(mas_2) << endl;*/

    // Task 3
    /*const int i = 2, j = 3;
    float mas_3[i][j];
    cout << "Generated array: " << endl;
    calculation(mas_3);*/

    // Task 4
    /*int mas_4[5][6] = { {27, 8, 52, 14, 49, 11},{2, 33, 36, 44, 18, 7},{46, 1, 39, 30, 13, 20},{9, 41, 19, 28, 25, 51},{38, 11, 36, 71, 57, 7} };
    cout << "Given two-dimensional array: " << endl;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            cout << mas_4[i][j] << "\t";
        }
        cout << endl;
    }
    cout << endl << "Corresponding averages: " << endl;
    average(mas_4);*/

    // Task 5
    int mas_5[4][4] = { {121, 541, 31, 11},{33, 18, 41, 22},{72, 1, 53, 4},{88, 22, 41, 7} };
    cout << "Given two-dimensional array: " << endl;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << mas_5[i][j] << "\t";
        }
        cout << endl;
    }
    cout << endl;
    min_sum(mas_5);

    return 0;
}

//Task 1 (zav_1) : Finds the maximum element in an array(a) and swaps it with the first element.
//Task 2 (random) : Generates a random floating - point number within a specified range(fir to sec).
//Task 2 (diff) : Calculates the difference between the product of all positive elements and the 
//product of the absolute values of all negative elements in an array(a).
//Task 3 (calculation) : Computes values for a 2x3 array(a) using a specific mathematical formula based on indices.
//Task 4 (average) : Computes the average of positive elements in each column of a 5x6 array(a).
//Task 5 (min_sum) : Calculates the sum of each row in a 4x4 array(a) and identifies which row has the smallest sum.
