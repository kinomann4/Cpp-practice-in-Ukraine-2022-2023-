#include <stdio.h>
#include <windows.h>
#include <math.h>
#pragma warning(disable:4996)

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    // Task 1
    /*int num = 266;
    for (; num >= 0; num -= 38)
    {
        printf("%d ", num);
    }*/

    // Task 2
    /*float x = 0, y;
    printf("--------------\n");
    printf("   x   |   y  \n");
    printf("--------------\n");
    do
    {
        y = (pow(x - 2, 2)) / 3;
        printf("%5.2f | %5.2f\n", x, y);
        printf("--------------\n");
        x += 0.5;
    } while (x <= 4);*/

    // Task 3
    /*int A, B, C = 1;
    printf("Enter numbers A and B: ");
    scanf_s("%d %d", &A, &B);
    printf("Sequence: \n");
    if (A > B)
    {
        while (B < A)
        {
            printf("%d\t", B);
            B += 1;
            C += 1;
        }
        printf("%d\n", A);
        printf("Number of elements in the sequence: %d\n", C);
    }
    else if (B > A)
    {
        while (A < B)
        {
            printf("%d\t", A);
            A += 1;
            C += 1;
        }
        printf("%d\n", B);
        printf("Number of elements in the sequence: %d\n", C);
    }
    else printf("The values of the entered variables are equal.\n");*/

    // Task 4
    int n_1, n_2, n_3, n_4, n_5, n_6, ticket = 111111;
    int fir = 0, sec = 0, check = 0;
    while (ticket <= 999999)
    {
        n_1 = ticket / 100000;
        n_2 = (ticket / 10000) % 10;
        n_3 = (ticket / 1000) % 10;
        n_4 = (ticket / 100) % 10;
        n_5 = (ticket / 10) % 10;
        n_6 = ticket % 10;
        fir = n_1 + n_2 + n_3;
        sec = n_4 + n_5 + n_6;
        if (fir == sec && fir == 13)
        {
            check += 1;
        }
        ticket += 1;
    }
    printf("Number of lucky tickets with the sum of the corresponding three digits equal to 13: %d\n", check);

    // Task 5
    // char FIO[100], FIO_1[100], FIO_2[100], FIO_3[100], FIO_4[100], FIO_5[100], grupa[100], grupa_1[100], grupa_2[100], grupa_3[100], grupa_4[100], grupa_5[100];
    // int kurz, kurz_1 = 0, kurz_2 = 0, kurz_3 = 0, kurz_4 = 0, kurz_5 = 0;
    // int bal_1, bal_2, bal_3;
    // float avarge, avarge_1 = 0, avarge_2 = 0, avarge_3 = 0, avarge_4 = 0, avarge_5 = 0;
    // char stip_1, stip_2, stip_3, stip_4, stip_5;
    // int i, ed, s_ch = 0, s_n = 0, nayv_s = 0;
    // for (i = 1; i <= 5; i += 1)
    // {
    //     printf("Enter Full Name, course number, and group name (space-separated): ");
    //     scanf("%s %d %s", FIO, &kurz, grupa);
    //     printf("Enter the student's scores (space-separated): ");
    //     scanf_s("%d %d %d", &bal_1, &bal_2, &bal_3);
    //     avarge = (bal_1 + bal_2 + bal_3) / 3;
    //     if (kurz == 4) s_ch += 1;
    //     if (avarge < 3) s_n += 1;
    //     switch (i)
    //     {
    //     case 1: strcpy(FIO_1, FIO); kurz_1 = kurz; strcpy(grupa_1, grupa); avarge_1 = avarge; break;
    //     case 2: strcpy(FIO_2, FIO); kurz_2 = kurz; strcpy(grupa_2, grupa); avarge_2 = avarge; break;
    //     case 3: strcpy(FIO_3, FIO); kurz_3 = kurz; strcpy(grupa_3, grupa); avarge_3 = avarge; break;
    //     case 4: strcpy(FIO_4, FIO); kurz_4 = kurz; strcpy(grupa_4, grupa); avarge_4 = avarge; break;
    //     case 5: strcpy(FIO_5, FIO); kurz_5 = kurz; strcpy(grupa_5, grupa); avarge_5 = avarge; break;
    //     }
    // }
    // (avarge_1 < 4.00) ? stip_1 = '-' : stip_1 = '+';
    // if (stip_1 == '+') nayv_s += 1;
    // (avarge_2 < 4.00) ? stip_2 = '-' : stip_2 = '+';
    // if (stip_2 == '+') nayv_s += 1;
    // (avarge_3 < 4.00) ? stip_3 = '-' : stip_3 = '+';
    // if (stip_3 == '+') nayv_s += 1;
    // (avarge_4 < 4.00) ? stip_4 = '-' : stip_4 = '+';
    // if (stip_4 == '+') nayv_s += 1;
    // (avarge_5 < 4.00) ? stip_5 = '-' : stip_5 = '+';
    // if (stip_5 == '+') nayv_s += 1;
    // printf("------------------------------------------------------------------------------\n");
    // printf("|#|%14s        | kurs  |      grupa      | Sr.bal | Stip |\n", "FIO");
    // printf("------------------------------------------------------------------------------\n");
    // printf("|1|%16s\t |%6i |%16s |%7.2f |%3c   |\n", FIO_1, kurz_1, grupa_1, avarge_1, stip_1);
    // printf("------------------------------------------------------------------------------\n");
    // printf("|2|%16s\t |%6i |%16s |%7.2f |%3c   |\n", FIO_2, kurz_2, grupa_2, avarge_2, stip_2);
    // printf("------------------------------------------------------------------------------\n");
    // printf("|3|%16s\t |%6i |%16s |%7.2f |%3c   |\n", FIO_3, kurz_3, grupa_3, avarge_3, stip_3);
    // printf("------------------------------------------------------------------------------\n");
    // printf("|4|%16s\t |%6i |%16s |%7.2f |%3c   |\n", FIO_4, kurz_4, grupa_4, avarge_4, stip_4);
    // printf("------------------------------------------------------------------------------\n");
    // printf("|5|%16s\t |%6i |%16s |%7.2f |%3c   |\n", FIO_5, kurz_5, grupa_5, avarge_5, stip_5);
    // printf("------------------------------------------------------------------------------\n\n");
    // printf("Additional information (1 - 4th year students; 2 - failing students (average score < 3.00); 3 - scholarship presence):");
    // scanf_s("%d", &ed);
    // switch (ed)
    // {
    // case 1: printf("4th year students: %d\n", s_ch); break;
    // case 2: printf("Failing students: %d\n", s_n); break;
    // case 3: printf("Scholarship presence: %d\n", nayv_s); break;
    // }

    return 0;
}
