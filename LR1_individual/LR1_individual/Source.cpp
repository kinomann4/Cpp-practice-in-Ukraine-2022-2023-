# include <stdio.h>
#include <windows.h>
#pragma warning(disable:4996)
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	// Task 1
	printf("My name is Maksym and I study at the Paton Vocational College\n\
in the software development group PZ-21-1/9\n\n");
	// Task 2
	char star = '*';
	int number = 1;
	printf("%c%10c%10c%21d\n", star, star, star, number);
	printf("%6c%10c%23d%6d\n", star, star, number, number);
	printf("%c%10c%10c%15d%12d\n", star, star, star, number, number);
	printf("%6c%10c%23d%6d\n", star, star, number, number);
	printf("%c%10c%10c%21d\n\n", star, star, star, number);
	// additional
	printf("%c%c%c%c%c%c%c%c%c%c%11c%12c%14c%c%c%c%c\n", '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#');
	printf("%c%19c%2c%10c%2c%12c\n", '#', '#', '#', '#', '#', '#', '#');
	printf("%c%18c%4c%8c%4c%10c\n", '#', '#', '#', '#', '#', '#', '#');
	printf("%c%17c%6c%6c%6c%9c%c%c%c%c%c\n", '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#');
	printf("%c%16c%8c%4c%8c%8c\n", '#', '#', '#', '#', '#', '#');
	printf("%c%15c%10c%2c%10c%8c\n", '#', '#', '#', '#', '#', '#');
	printf("%c%14c%12c%12c%8c%c%c%c%c\n\n", '#', '#', '#', '#', '#', '#', '#', '#', '#', '#');
	// Task 3
	float a = -53.2346;
	printf("%+.6f\n\n", a);
	// Task 4
	float b;
	scanf_s("%f", &b);
	printf("%-10.4f\n\n", b);
	// Task 5
	char FIO_1[100], FIO_2[100], FIO_3[100], grupa_1[100], grupa_2[100], grupa_3[100];
	int kurz_1, kurz_2, kurz_3;
	printf("Enter the name, course number, and group name (separated by spaces) of the first student: ");
	scanf("%s %d %s", FIO_1, &kurz_1, grupa_1);
	printf("Enter the name, course number, and group name (separated by spaces) of the second student: ");
	scanf("%s %d %s", FIO_2, &kurz_2, grupa_2);
	printf("Enter the name, course number, and group name (separated by spaces) of the third student: ");
	scanf("%s %d %s", FIO_3, &kurz_3, grupa_3);
	printf("--------------------------------------------------------------\n");
	printf("|#|%14s         |   course   |         group         |\n", "Name");
	printf("--------------------------------------------------------------\n");
	printf("|1|%16s\t  |%6i    |%16s       |\n", FIO_1, kurz_1, grupa_1);
	printf("--------------------------------------------------------------\n");
	printf("|2|%16s\t  |%6i    |%16s       |\n", FIO_2, kurz_2, grupa_2);
	printf("--------------------------------------------------------------\n");
	printf("|3|%16s\t  |%6i    |%16s       |\n", FIO_3, kurz_3, grupa_3);
	printf("--------------------------------------------------------------\n");
	return 0;
}


// This program performs the following tasks:
// 1. Prints a brief introduction about the author.
// 2. Prints a pattern of stars and numbers with specific spacing and alignment.
// 3. Prints an additional pattern using the # character.
// 4. Prints a floating-point number with a specific format.
// 5. Reads and prints details (name, course number, and group name) of three students in a tabular format.