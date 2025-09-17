/*
Question 54: Write a program to print the following pattern:

*

***

*****
*******
***

*

Example:
Output:
*

***

*****
*******
***

*

*/

#include <stdio.h>

int main() {
    int rows[] = {1, 3, 5, 7, 3, 1};

    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < rows[i]; j++) {
            printf("*");
        }
        printf("\n\n");
    }

    return 0;
}