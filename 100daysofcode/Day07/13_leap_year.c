/*
Question 13: Write a program to input a year and check whether it is a leap year or not using conditional statements.

Example:
Input: 2020
Output: Leap year
*/

#include <stdio.h>

int main() {
    int year;

    // Input a year
    printf("Enter a year: ");
    scanf("%d", &year);

    // Check leap year
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        printf("Leap year\n");
    } else {
        printf("Not a leap year\n");
    }

    return 0;
}