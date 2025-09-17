/*
Question 53: Write a program to print the following pattern:
*
***
*****
*******
*********
*******
*****
***
*

Example:
Output:
*
***
*****
*******
*********
*******
*****
***
*
*/

#include <stdio.h>

int main() {
    int rows = 5;

    // Upper part of the pattern
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    // Lower part of the pattern
    for (int i = rows - 1; i >= 1; i--) {
        for (int j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}