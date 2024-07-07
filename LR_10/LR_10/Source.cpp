# include <iomanip>
#include <windows.h>
#include <iostream>
#include <math.h>
using namespace std;

// Function to generate a random number within a specified range
int random(int& fir, int& sec)
{
    int a, res;
    a = rand();
    while (true)
    {
        if (a < fir || a > sec)
        {
            a = rand();
        }
        else
        {
            res = a;
            break;
        }
    }
    return res;
}

// Function to calculate the sum and count of odd elements in an array
void sumnep(int* arr, int& amount)
{
    int summ = 0;
    for (int i = 0; i <= 9; i++)
    {
        if (*++arr % 2 == 1)  // Moves to the next element and checks if it's odd
        {
            summ += *arr;  // Adds the odd element to the sum
            amount += 1;   // Increments the count of odd elements
        }
    }
    cout << "Sum of odd elements: " << summ << endl;
    cout << "Count of odd elements: " << amount << endl;
}

// Function to find the minimum element in an array and its position
int minel(int* arr, int* place)
{
    int min = *arr;
    for (int i = 1; i < 10; i++)
    {
        if (*++arr < min)  // Moves to the next element and checks if it's smaller than the current minimum
        {
            min = *arr;   // Updates the minimum value
            *place = i;   // Stores the position of the minimum element
        }
    }
    return min;
}

int main()
{
    SetConsoleCP(1251);  // Set console input code page for Cyrillic
    SetConsoleOutputCP(1251);  // Set console output code page for Cyrillic
    int number;
start:
    cout << "Enter task number (from 1 to 3, 0 - to exit): ";
    cin >> number;
    switch (number)
    {
    case 1:
    {
        // Task 1
        long float i = 53.12, * r;
        r = &i;
        cout << "Variable through its name: " << i << endl;
        cout << "Variable through its pointer: " << *r << endl;
        cout << "Address of the variable: " << r << endl;
        cout << "Address of the pointer: " << &r << endl << endl;
        goto start;
    }
    case 2:
    {
        // Task 2
        float mas[8] = { 3.12, 5.42, 6.11, 12.22, 14.67, 21.53, 32.41, 35.35 };
        float* p1 = &mas[2], * p2 = &mas[7];
        cout << "Difference between obtained pointers: " << p2 - p1 << endl;
        cout << "a=(*p2)++ => " << (*p2)++ << endl;
        cout << "a= ++*p1 => " << ++ * p1 << endl;
        float a = *p1++ = *p2++;
        cout << "*p1++ = *p2++ => " << a << endl << endl;
        goto start;
    }
    case 3:
    {
        // Task 3
        int first = 13, second = 99, mass[10], emmo = 0;
        int min, temp, pl;
        cout << "Created array: ";
        for (int i = 0; i <= 9; i++)
        {
            mass[i] = random(first, second);  // Generates random numbers within the specified range
            cout << mass[i] << "  ";
        }
        int last = mass[9];  // Stores the last element of the array
        cout << endl;
        sumnep(mass, emmo);  // Calculates sum and count of odd elements in the array
        min = minel(mass, &pl);  // Finds the minimum element and its position in the array
        cout << "Minimum element: " << min << endl;
        mass[9] = min;  // Replaces the last element with the minimum element
        mass[pl] = last;  // Replaces the element at position pl with the last element
        cout << "New array: " << endl;
        for (int i = 0; i <= 9; i++)
        {
            cout << mass[i] << "  ";
        }
        cout << endl;
        goto start;
    }
    case 0:
        break;
    default:
        cout << "There is no task with this number";
        goto start;
    }
    return 0;
}

//
//Task 1: Prints a floating - point variable(i) using both its nameand its pointer, along with their addresses.
//
//Task 2 : Manipulates an array of floating - point numbers(mas), calculates the difference between pointers, 
//performs postfixand prefix increment operations on elements pointed by p1and p2, and assigns values between elements.
//
//Task 3 : Generates a random array of integers within a specified range(first to second), 
//computes the sumand count of odd elements in the array, finds the minimum elementand its 
//position, replaces the last element with the minimum element, and swaps another element with the last element.