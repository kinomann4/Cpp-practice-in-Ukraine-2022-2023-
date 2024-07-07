#include <stdio.h>          // The library contains functions for input/output, such as printf() and scanf()
#include <conio.h>          // The library contains functions for working with console input and output
#include <math.h>           // The library contains mathematical functions, such as sqrt() and pow()
#include <windows.h>        // The library contains functions for working with Windows API

void main() {               // Declaration of the main() function, which is the starting point for the program execution
    SetConsoleCP(1251);             // Sets the input encoding for the console, used for displaying Cyrillic and Latin characters in some countries
    SetConsoleOutputCP(1251);       // Sets the output encoding for the console, used for correctly displaying Cyrillic and Latin characters
    float x;                // Declaration of variable x
    float y;                // Declaration of variable y
    float s = 0;            // Declaration of variable s, initialized to zero
    float sa;               // Declaration of variable sa
    int k = 0;              // Declaration of variable k, initialized to zero
    printf("\nFunction tabulation results:\n");                // Print the given text with a newline
    x = 2;                  // Assign the value 2 to variable x
    for (x = 2; x < 4.1; x += 0.2) {            // Start of the loop with x = 2, x < 4.1 as the condition, and a step of 0.2; start of block {} 1
        y = 2 * sin(3 * x) + 3 * cos(5 * x);    // Calculate the function
        printf(" x=%+4.2f y=%+4.2f\n", x, y);   // Print the values of x and y with a width of 4 and precision of 2
        if ((y >= 1) && (y <= 3))               // Check if y is in the range [1, 3]
        {                       // Start of block {} 2
            k = k + 1;          // Increment k by 1
            s = s + y;          // Add y to s
        }                       // End of block {} 2
    }                       // End of block {} 1 (end of the loop)
    printf("\nProcessing the results of function tabulation:\n");                // Print the given text with a newline
    if (k > 0) {                // Check if k > 0 and start block {} 3
        sa = s / k;                 // Calculate the value of sa
        printf("\nNumber of function values in the interval [1;3] k=%3d", k);                       // Print the given text and the value of k with a width of 3
        printf("\nSum of function values in the interval [1;3] s=%6.2f", s);                            // Print the given text and the value of s with a width of 6 and precision of 2
        printf("\nArithmetic mean of function values in the interval [1;3] sa=%6.2f\n", sa);       // Print the given text and the value of sa with a width of 6 and precision of 2
    }                           // End of block {} 3
    else                        // Action if the condition is not met
        printf("\n k=%3d No function values in the interval [1;3]\n", k);                        // Print the given text and the value of k with a width of 3 and newlines before and after the text
}
