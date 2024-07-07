#include <iomanip>
#include <windows.h>
#include <iostream>
#include <math.h>
using namespace std;

// Function for Task 1
void func1(char* mas1)
{
    for (int i = 0; i < 15; i++)
    {
        cout << "Enter " << i + 1 << "-th element: ";
        cin >> mas1[i];
    }
    mas1[0] = ' '; // Modify first element to a space
    mas1[14] = '.'; // Modify last element to a period
    cout << "Created array: ";
    for (int i = 0; i < 15; i++)
    {
        cout << mas1[i] << "   ";
    }
    cout << endl;
}

// Function for Task 2
void func2(char* c)
{
    int count = 0;
    for (int i = 0; i < 127; i++)
    {
        c[i] = 128 + i; // Fill array with ASCII extended characters
    }
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 16; j++)
        {
            cout << "|" << c[count] << "|  "; // Display characters in a grid format
            count += 1;
        }
        cout << endl << "------------------------------------------------------------------------------" << endl;
    }
}

// Function for Task 3
void func3(char* fir, const char* sec)
{
    // Convert uppercase Cyrillic letters to lowercase
    for (int i = 0; i < 35; i++)
    {
        if (fir[i] >= 'А' && fir[i] <= 'Я') fir[i] += 32;
        cout << fir[i];
    }
    cout << endl << "Length of the string: " << strlen(fir) << endl; // Output length of the string
    cout << "First word: " << fir[0] << endl; // Output first character of the string

    // Find positions of spaces to determine third word
    int sp[6];
    int k = 0;
    for (int i = 0; i < 35; i++)
    {
        if (fir[i] == ' ')
        {
            sp[k] = i;
            k++;
        }
    }
    cout << "Third word: ";
    for (int i = sp[1] + 1; i < sp[2]; i++)
    {
        cout << fir[i];
    }
}

// Function for Task 4
void func4(int* num, char* ryad)
{
    int count = 0;
    cout << "Enter a string (up to 30 characters, without spaces): ";
    for (int i = 0; i < 30; i++)
    {
        count++;
        num[i] = getchar(); // Read character input
        if (num[i] == '\n') break; // Break loop if newline encountered
    }
    cout << "Indexes of elements: ";
    for (int i = 0; i < count - 1; i++)
    {
        cout << num[i] << "  "; // Output numeric values of characters
    }
    cout << endl << "Corresponding string: ";
    for (int i = 0; i < count - 1; i++)
    {
        cout << (char)num[i]; // Output characters corresponding to numeric values
        if (i == count - 2) cout << " -> ";
    }
    for (int i = 0; i < count - 1; i++)
    {
        cout << num[i] << "  "; // Output numeric values again
    }
}

int main()
{
    SetConsoleCP(1251); // Set console input code page for Cyrillic
    SetConsoleOutputCP(1251); // Set console output code page for Cyrillic

    int number;
start:
    cout << "Enter task number (from 1 to 4, 0 - to exit): ";
    cin >> number;

    switch (number)
    {
    case 1:
    {
        // Task 1
        char mas1[16];
        func1(mas1);
        break;
    }
    case 2:
    {
        // Task 2
        char c[129];
        func2(c);
        break;
    }
    case 3:
    {
        // Task 3
        char fir[36] = "Я не Готовий ";
        const char* sec = "До лабораторної роботи";
        strcat_s(fir, sec); // Concatenate two strings
        func3(fir, sec);
        break;
    }
    case 4:
    {
        // Task 4
        int num[30];
        char ryad[30];
        func4(num, ryad);
        break;
    }
    case 0:
        break;
    default:
        cout << "Task number does not exist. " << endl;
        break;
    }

    goto start; // Restart the loop to prompt for another task or exit

    return 0;
}

//Task 1 (func1) : Reads 15 characters into an array mas1, modifies the firstand last elements, and then prints the array.
//Task 2 (func2) : Fills an array c with ASCII extended characters and prints them in a grid format.
//Task 3 (func3) : Modifies the string fir by converting uppercase Cyrillic letters to lowercase, calculates the string length, 
//identifies the first character, and extracts the third word.
//Task 4 (func4) : Reads a string of characters into an array num, outputs their numeric valuesand corresponding characters,
//and then outputs the numeric values again.
