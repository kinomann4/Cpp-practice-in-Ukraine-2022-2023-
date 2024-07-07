#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <windows.h>

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    // lab_work_06_02
    float x, y, ymin, xmin, y1 = 0, y2 = 0, ymax, xmax;
    printf("\nCalculation result:\n");
    for (x = 2; x <= 4.1; x += 0.1) {
        y = 2 * sin(3 * x) + 3 * cos(5 * x);
        printf("x=%+4.2f y=%+4.2f\n", x, y);
        if (x == 2 || y < ymin) { // Initialize ymin for the first iteration
            ymin = y;
            xmin = x;
        }
        if (x == 2 || y > ymax) { // Initialize ymax for the first iteration
            ymax = y;
            xmax = x;
        }
    }
    printf("The minimum value of the function is min= %4.2f at the point x = %4.2f\n", ymin, xmin);
    printf("The maximum value of the function is max= %4.2f at the point x = %4.2f\n\n", ymax, xmax);

    // lab_work_06_03(var 4)
    float X, Y, a = 1.8, b = 0.56, e = 2.7182, sum = 0;
    int count = 0; // Use an integer for counting
    printf("Function calculation results: \n");
    for (X = 1.3; X <= 6.1; X += 0.6) {
        Y = (pow(tan(a * X), 2) + sqrt(log10(X))) / pow(e, -b * X);
        printf("x=%+4.2f y=%+4.2f\n", X, Y);
        if (Y > 1) {
            sum += Y;
            count++;
        }
    }
    if (count > 0) { // Ensure no division by zero
        printf("Arithmetic mean: %+4.2f", sum / count);
    }
    else {
        printf("No values greater than 1 to calculate the arithmetic mean.");
    }

    return 0;
}
