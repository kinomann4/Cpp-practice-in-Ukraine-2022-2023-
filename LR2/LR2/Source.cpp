# include <stdio.h>
#include <windows.h>
#include <math.h>
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	// Task 1
	int a;
	float b;
	float x;
	printf("Enter the values of a and b separated by a space: ");
	scanf_s("%d %f", &a, &b);
	x = (0.4 + 8 * (5 - b) - 5 / 2.5) + (a * 8 - (8.9 - 2.6 / 0.66)) * 3.4;
	printf("The value of the expression is: %.3f\n\n", x);
	// Task 2
	int h_1, h_2, h_3;
	float r;
	printf("Enter three integers separated by spaces: ");
	scanf_s("%d %d %d", &h_1, &h_2, &h_3);
	printf("The product of these numbers: %d\n", h_1 * h_2 * h_3);
	--h_1;
	--h_2;
	--h_3;
	r = (h_1 + h_2 + h_3) / 3;
	printf("The arithmetic mean of numbers decreased by 1: %.2f\n\n", r);
	// Task 3
	float f_1, f_2, f_3, f_4, f_5;
	printf("Enter numbers to find the square and cube separated by spaces: ");
	scanf_s("%f %f %f %f %f", &f_1, &f_2, &f_3, &f_4, &f_5);
	printf("Number\tSquare\t   Cube\n");
	printf("%3.0f%9.0f%9.0f\n", f_1, f_1 * f_1, f_1 * f_1 * f_1);
	printf("%3.0f%9.0f%9.0f\n", f_2, f_2 * f_2, f_2 * f_2 * f_2);
	printf("%3.0f%9.0f%9.0f\n", f_3, f_3 * f_3, f_3 * f_3 * f_3);
	printf("%3.0f%9.0f%9.0f\n", f_4, f_4 * f_4, f_4 * f_4 * f_4);
	printf("%3.0f%9.0f%9.0f\n", f_5, f_5 * f_5, f_5 * f_5 * f_5);
	// Task 4
	int n;
	printf("Enter a positive number: ");
	scanf_s("%d", &n);
	printf("The number %d is %s a prime number.\n", n,
		(n <= 1 || n % 2 == 0 || n % 3 == 0 || n % 5 == 0 || n % 6 != 1 && n % 6 != 5 || n % (int)sqrt(n) == 0 || n % (int)sqrt(n) + 2 == 0) ? "not" : "");
	return 0;
}


// This program performs the following tasks:
// 1. Reads two values (a and b) from the user, calculates a mathematical expression involving these values, and prints the result.
// 2. Reads three integers, calculates their product, decreases each by one, and then calculates and prints the arithmetic mean of the decreased values.
// 3. Reads five floating-point numbers, calculates their squares and cubes, and prints the results in a formatted table.
// 4. Reads a positive integer and checks if it is a prime number, printing the result.