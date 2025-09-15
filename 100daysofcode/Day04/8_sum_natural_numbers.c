/*
Question 8: Write a program to find and display the sum of the first n natural numbers.

Example:
Input: 5
Output: Sum=15
*/

#include <stdio.h>

int main() {
    int n, sum = 0;

    // Input n
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    // Calculate sum of first n natural numbers
    for (int i = 1; i <= n; i++) {
        sum += i;
    }

    // Display result
    printf("Sum=%d\n", sum);

    return 0;
}