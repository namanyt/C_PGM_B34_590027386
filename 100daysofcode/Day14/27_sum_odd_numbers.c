/*
Question 27: Write a program to print the sum of the first n odd numbers.

Example:
Input: 3
Output: 9
*/

#include <stdio.h>

int main() {
    int n, sum = 0;

    // Input n
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    // Calculate sum of first n odd numbers
    for (int i = 1, count = 0; count < n; i += 2, count++) {
        sum += i;
    }

    // Display result
    printf("%d\n", sum);

    return 0;
}