# include <iomanip>
#include <windows.h>
#include <iostream>
#include <math.h>
#include <stdio.h>
#include <fstream>
using namespace std;
#pragma warning(disable:4996)

void task1()
{
	freopen("num1.txt", "w", stdout);  // Redirect stdout to num1.txt
	char c[129];
	int count = 0;

	// Fill array c with characters from 128 to 255
	for (int i = 0; i < 127; i++)
	{
		c[i] = 128 + i;
	}

	// Print characters in a formatted grid
	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 16; j++)
		{
			cout << "|" << c[count] << "| ";
			count += 1;
		}
		cout << endl << "---------------------------------------------------------------" << endl;
	}

	freopen("CON", "w", stdout);  // Restore stdout to console
}

void task2()
{
	fstream fp;
	fp.open("num2.txt", 'w');  // Open num2.txt for writing

	// Write header to num2.txt
	fp << "\tx\t|\ty\t" << endl;
	fp << "-----------------------------------" << endl;

	// Calculate and write values to num2.txt
	for (float i = 0; i <= 4; i += 0.5)
	{
		fp << "\t" << i << "\t|\t" << setprecision(3) << (pow(i - 2, 2)) / 3 << "\t" << endl;
		fp << "-----------------------------------" << endl;
	}

	fp.close();  // Close num2.txt
}

void task3()
{
	ifstream fp;
	fp.open("num3.txt");  // Open num3.txt for reading
	char per[30];
	int count1 = 0, count2 = 0;

	// Read string from num3.txt and count occurrences of '(' and ')'
	fp >> per;
	for (int i = 0; i < sizeof(per); i++)
	{
		if (per[i] == '(')
		{
			count1 += 1;
		}
		if (per[i] == ')')
		{
			count2 += 1;
		}
	}

	// Print the counts of '(' and ')'
	cout << "Number of '(' is: " << count1 << endl;
	cout << "Number of ')' is: " << count2 << endl;
}

void task4()
{
	fstream fp("num4.txt");  // Open num4.txt for reading and writing
	int mass[10];
	int max;
	int j = 0;

	fp >> max;  // Read the first integer from num4.txt
	mass[0] = max;

	// Read remaining integers and find the maximum
	for (int i = 1; i < 10; i++)
	{
		fp >> mass[i];
		if (max < mass[i])
		{
			max = mass[i];
			j = i;
		}
	}

	freopen("num4.txt", "a", stdout);  // Append stdout to num4.txt

	// Swap the maximum value with the first value
	int first = mass[0];
	mass[j] = first;
	mass[0] = max;

	// Print the modified array to num4.txt
	cout << endl << endl;
	for (int i = 0; i < 10; i++)
	{
		cout << mass[i] << " ";
	}

	freopen("CON", "w", stdout);  // Restore stdout to console
}

void task5()
{
	ifstream fp("Angaben.txt");  // Open Angaben.txt for reading
	int rad[15], height[15];
	const float pi = 3.1415;

	// Read radii and heights from Angaben.txt
	for (int i = 0; i < 15; i++)
	{
		fp >> rad[i];
	}
	for (int i = 0; i < 15; i++)
	{
		fp >> height[i];
	}

	freopen("num5.txt", "w", stdout);  // Redirect stdout to num5.txt

	// Print table headers
	cout << "|\tR\t|\th\t|\tV\t|\tS\t|" << endl;
	cout << "-----------------------------------------------------------------" << endl;

	// Calculate and print volumes and surface areas
	for (int i = 0; i < 15; i++)
	{
		float l = sqrt(pow(rad[i], 2) + pow(height[i], 2));
		cout << "\t" << rad[i] << "\t|\t" << height[i] << "\t|\t" << (1 / 3.0) * pi * pow(rad[i], 2) * height[i] << "\t|\t" << pi * rad[i] * l << endl;
		cout << "-----------------------------------------------------------------" << endl;
	}

	freopen("CON", "w", stdout);  // Restore stdout to console
}

int main()
{
	SetConsoleCP(1251);  // Set input console code page to 1251 (Cyrillic)
	SetConsoleOutputCP(1251);  // Set output console code page to 1251 (Cyrillic)
	int number;

start:
	cout << "Enter task number (1 to 5, 0 to exit): ";
	cin >> number;

	switch (number)
	{
	case 1:
	{
		task1();  // Execute task 1
		cout << "Task 1 executed" << endl;
	}
	goto start;
	case 2:
	{
		task2();  // Execute task 2
		cout << "Task 2 executed" << endl;
	}
	goto start;
	case 3:
	{
		task3();  // Execute task 3
		cout << "Task 3 executed" << endl;
	}
	goto start;
	case 4:
	{
		task4();  // Execute task 4
		cout << "Task 4 executed" << endl;
	}
	goto start;
	case 5:
	{
		task5();  // Execute task 5
		cout << "Task 5 executed" << endl;
	}
	goto start;
	case 0: break;  // Exit the program
	default: cout << "No such task number." << endl; goto start;  // Invalid task number
	}

	return 0;
}


//task1
//Generates characters from 128 to 255 and prints them in a formatted grid to num1.txt.
//
//task2
//Writes a table of values calculated using a mathematical formula to num2.txt.
//
//task3
//Reads a string from num3.txtand counts the occurrences of '(' and ')' characters.
//
//task4
//Reads integers from num4.txt, finds the maximum value, swaps it with the first value, and prints the modified array to num4.txt.
//
//task5
//Reads pairs of integers(radiusand height) from Angaben.txt, calculates volumesand surface areas, and prints them in a formatted table to num5.txt.