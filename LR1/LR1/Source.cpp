/* lab_work_01_03 */
#include <stdio.h>
#include <windows.h>
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    // Printing positive integers with right alignment:
    printf("\n%s\n%s\n", // string of characters
        " Printing positive integers with format %4d",
        " with right alignment:");
    printf(" %4d\n", 1); // decimal integer with width 4
    printf(" %4d\n", 12); // decimal integer with width 4
    printf(" %4d\n", 123); // decimal integer with width 4
    printf(" %4d\n", 1234); // decimal integer with width 4
    printf(" %4d\n", 12345); // decimal integer with width 4
    printf("%s\n%s\n", // %s - string format
        " In the last case, the width was insufficient -",
        " this explains the poor alignment");
    printf("\n%s\n%s\n",
        " Printing negative integers with format %4d", // decimal integer with width 4
        " with right alignment:");
    printf(" %4d\n", -1); // decimal integer with width 4 and space flag
    printf(" %4d\n", -12); // decimal integer with width 4 and space flag
    printf(" %4d\n", -123); // decimal integer with width 4 and space flag
    printf(" %4d\n", -1234); // decimal integer with width 4 and space flag
    printf(" %4d\n", -12345); // decimal integer with width 4 and space flag
    printf("%s\n%s\n", // %s - string format
        " In the last two cases, the width was insufficient -",
        " this explains the poor alignment");
    // Using the flag (-) in formats for left alignment:
    printf("\n%s\n%s\n",
        " Printing constants of different types with formats of eight characters",
        " with right alignment:");
    printf(" %8s%8d%8c%8f\n", "Hello", 7, 'a', 1.23); // list of specifiers (string, integer, character, and float with width 8)
    printf("\n%s\n%s\n", // %s - string format
        " Using the flag (-) in formats",
        " for left alignment:");
    printf(" %-8s%-8d%-8c%-8f\n", "Hello", 7, 'a', 1.23); // list of specifiers (string, integer, character, and float with width 8) with "-" flag
    // Using the flag (+) in formats for mandatory printing of the sign of numbers:
    printf("\n%s\n%s\n", // %s - string format
        " Printing integer constants with format %d",
        " with right alignment:");
    printf(" %d\n %d\n", 786, -786);
    printf("\n%s\n%s\n",
        " Using the flag (+) in formats",
        " for mandatory printing of the sign of numbers:");
    printf(" %+d\n %+d\n", 786, -786);
    // Using the flag (space) in formats for printing a space before positive numbers:
    printf("\n%s\n%s\n",
        " Printing integer constants with format %d",
        " with right alignment:");
    printf(" %d\n %d\n", 786, -786);
    printf("\n%s\n%s\n",
        " Using the flag (space) in formats",
        " for printing a space before positive numbers:");
    printf(" %d\n %d\n", 786, -786);
    // Using the flag (#) in formats for printing: the sign o before octal numbers
    // the sign x before hexadecimal numbers, a dot in floating point numbers
    int c = 1427;
    double p = 1427.0;
    printf("\n%s\n%s\n%s\n%s\n%s\n%s\n",
        " Using the flag (#) in formats",
        " for printing:",
        " the sign o before octal numbers",
        " the sign x before hexadecimal numbers",
        " the sign X before hexadecimal numbers",
        " a dot in floating point numbers");
    printf("\n %#o", c); // octal integer without sign
    printf("\n %#x", c); // hexadecimal integer without sign
    printf("\n %#X", c); // hexadecimal integer without sign
    printf("\n %g", p); // representation of floating-point values
    printf("\n %#g\n", p); // representation of floating-point values
    // Using the flag (0) in formats for filling empty characters with zeros:
    printf("\n%s\n%s\n",
        " Using the flag (0) in formats",
        " for filling empty characters with zeros:");
    printf(" %+09d\n", 452);
    printf(" %09d\n", 452);
    return 0;
}

//
//This program demonstrates the usage of different format specifiersand 
//flags in C for printing various types of data(integers, strings, characters, 
//and floating - point numbers) with specific formatting requirements such 
//as rightand left alignment, mandatory sign printing, space before positive 
//numbers, and filling empty spaces with zeros.






