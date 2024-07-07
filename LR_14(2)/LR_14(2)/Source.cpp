#include <iomanip>
#include <windows.h>
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    SetConsoleCP(1251); // Set console input code page for Cyrillic
    SetConsoleOutputCP(1251); // Set console output code page for Cyrillic

    // Task 1
    /*char text[209] = "На березі океану танцюють мрії, в хвилях вірші шепочуть вітер, кольори емоцій малюють безмежні простори, роса відбиває зорепади думок. Вічність зупиняється, гармонія переповнює душу, слова стають пером крила.";
    int length = strlen(text);
    int count1 = 0, count2 = 0, count3 = 0, lines = 0;
    for (int i = 0; i < length; i++)
    {
        count1 += 1;
        if (count1 == 50)
        {
            lines += 1; count1 = 0;
        }
    }
    count1 = 0;
    int* ptr = new int[lines] {0,0,0,0};
    for (int i = 0; i < lines; i++)
    {
        for (int j = i * 50; j < 50 + (i * 50); j++)
        {
            if (text[count1] == ' ') ptr[i] += 1;
            count1 += 1;
        }
    }
    for (int i = 0; i < length; i++)
    {
        cout << text[i];
        if (text[i] == ' ') count2 += 1;
        if (count2 == ptr[count3])
        {
            cout << endl;
            count2 = 0;
            count3 += 1;
        }
    }
    delete[] ptr;*/

    // Task 2
    int headcount = 0;
    char text2[133] = " кулінарія шабаш полум'я екзотичний мінімум журналіст мармелад аура підсніжник супернова ретроспектива бризки арфа космополіт радар ";
    int length1 = strlen(text2);
    int length2 = 1, spaces = 0;

    // Counting spaces to determine number of words
    for (int i = 0; i < length1; i++) {
        if (text2[i] == ' ') {
            spaces += 1;
        }
    }

    // Creating an array to store positions of spaces
    int* ptr2 = new int[spaces] {};
    int count1 = 0;
    for (int i = 0; i < length1; i++) {
        if (text2[i] == ' ') {
            ptr2[count1] = i;
            count1 += 1;
        }
    }

    // Outputting all words and counting words where first and last letters match
    cout << "All words: " << endl;
    char* ptr1 = new char[length2];
    for (int i = 0; i < spaces - 1; i++) {
        length2 = ptr2[i + 1] - ptr2[i];
        ptr1 = new char[length2];
        for (int j = ptr2[i]; j < ptr2[i + 1]; j++) {
            ptr1[j - ptr2[i]] = text2[j];
            cout << ptr1[j - ptr2[i]];
        }
        cout << endl;
        if (ptr1[0] == ptr1[length2 - 2]) {
            headcount += 1;
        }
        delete[] ptr1;
    }

    // Outputting the count of words where the first and last letters match
    cout << endl << "Count of words where the first and last letters match: " << headcount;

    delete[] ptr2;
    return 0;
}

//Task 1 (Commented Out)
//The code for Task 1 is commented out, so it's not executed. Here's a brief explanation of what it would do:
//
//Objective: Break a long string(text) into lines of 50 characters each, ensuring that words are not split.
//Steps :
//    Calculate the number of lines needed(lines) based on the length of text.
//    Count spaces(ptr[i]) to determine where line breaks should occur.
//    Output text in lines of 50 characters, ensuring that words are not split across lines.
//    Task 2
//    Objective : Analyze a string(text2) containing multiple words separated by spaces.
//    Steps :
//    Count Spaces : Determine the number of words by counting spaces in text2.
//    Store Positions : Create an array(ptr2) to store positions of spaces in text2.
//    Extract and Output Words :
//For each word identified by spaces :
//Output the word.
//Check if the firstand last characters of the word are the same.
//Count how many words meet this criterion(headcount).
//Output : Display all wordsand then display the count of words where the firstand last letters match.