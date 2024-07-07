#include <stdio.h>
#include <windows.h>
#include <math.h>
#pragma warning(disable:4996)
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	// Task 1
	float a, b, c, p;
	printf("Enter the lengths of the sides of the triangle separated by spaces: ");
	scanf_s("%f %f %f", &a, &b, &c);
	p = (a + b + c) / 2;
	printf("The area is: %.2f sq. units\n", sqrt(p * (p - a) * (p - b) * (p - c)));
	// Task 2 
	char FIO_1[100], FIO_2[100], FIO_3[100], grupa_1[100], grupa_2[100], grupa_3[100];
	int kurz_1, kurz_2, kurz_3;
	int bal_1, bal_2, bal_3, bal_4, bal_5, bal_6, bal_7, bal_8, bal_9, bal_10, bal_11, bal_12, bal_13, bal_14, bal_15;
	float avarge_1, avarge_2, avarge_3;
	char stip_1, stip_2, stip_3;
	printf("Enter the full name, course number, and group name (separated by spaces) of the first student: ");
	scanf("%s %d %s", FIO_1, &kurz_1, grupa_1);
	printf("Enter this student's grades separated by spaces (5 grades): ");
	scanf_s("%d %d %d %d %d", &bal_1, &bal_2, &bal_3, &bal_4, &bal_5);
	printf("Enter the full name, course number, and group name (separated by spaces) of the second student: ");
	scanf("%s %d %s", FIO_2, &kurz_2, grupa_2);
	printf("Enter this student's grades separated by spaces (5 grades): ");
	scanf_s("%d %d %d %d %d", &bal_6, &bal_7, &bal_8, &bal_9, &bal_10);
	printf("Enter the full name, course number, and group name (separated by spaces) of the third student: ");
	scanf("%s %d %s", FIO_3, &kurz_3, grupa_3);
	printf("Enter this student's grades separated by spaces (5 grades): ");
	scanf_s("%d %d %d %d %d", &bal_11, &bal_12, &bal_13, &bal_14, &bal_15);
	avarge_1 = (bal_1 + bal_2 + bal_3 + bal_4 + bal_5) / 5;
	(avarge_1 < 4.00) ? stip_1 = '-' : stip_1 = '+';
	avarge_2 = (bal_6 + bal_7 + bal_8 + bal_9 + bal_10) / 5;
	(avarge_2 < 4.00) ? stip_2 = '-' : stip_2 = '+';
	avarge_3 = (bal_11 + bal_12 + bal_13 + bal_14 + bal_15) / 5;
	(avarge_3 < 4.00) ? stip_3 = '-' : stip_3 = '+';
	printf("------------------------------------------------------------------------------\n");
	printf("|#|%14s         |   kurs   |         grupa         | Sr.bal | Stip |\n", "FIO");
	printf("------------------------------------------------------------------------------\n");
	printf("|1|%16s\t  |%6i    |%16s       |%6.2f  |%4c  |\n", FIO_1, kurz_1, grupa_1, avarge_1, stip_1);
	printf("------------------------------------------------------------------------------\n");
	printf("|2|%16s\t  |%6i    |%16s       |%6.2f  |%4c  |\n", FIO_2, kurz_2, grupa_2, avarge_2, stip_2);
	printf("------------------------------------------------------------------------------\n");
	printf("|3|%16s\t  |%6i    |%16s       |%6.2f  |%4c  |\n", FIO_3, kurz_3, grupa_3, avarge_3, stip_3);
	printf("------------------------------------------------------------------------------\n");
	return 0;
}


// This program performs the following tasks:
// 1. Reads the lengths of the sides of a triangle, calculates its area using Heron's formula, and prints the result.
// 2. Reads the full names, course numbers, group names, and grades of three students, calculates their average grades, determines 
//their stipend status based on the average grade, and prints the results in a formatted table.