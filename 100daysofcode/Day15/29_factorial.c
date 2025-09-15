/*
Question 29: Write a program to calculate the factorial of a number.

Example:
Input: 5
Output: 120
*/

#include <stdio.h>

int main() {
    int n;
    long long factorial = 1;

    // Input n
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    // Calculate factorial
    for (int i = 1; i <= n; i++) {
        factorial *= i;
    }

    // Display result
    printf("%lld\n", factorial);

    return 0;
}