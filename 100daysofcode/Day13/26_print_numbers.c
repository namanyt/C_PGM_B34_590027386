/*
Question 26: Write a program to print numbers from 1 to n.

Example:
Input: 5
Output: 1 2 3 4 5
*/

#include <stdio.h>

int main() {
    int n;

    // Input n
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    // Print numbers from 1 to n
    for (int i = 1; i <= n; i++) {
        printf("%d ", i);
    }
    printf("\n");

    return 0;
}