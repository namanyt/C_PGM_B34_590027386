/*
Question 28: Write a program to print the product of even numbers from 1 to n.

Example:
Input: 4
Output: 8 (2 * 4)
*/

#include <stdio.h>

int main() {
    int n;
    long long product = 1;

    // Input n
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    // Calculate product of even numbers from 1 to n
    for (int i = 2; i <= n; i += 2) {
        product *= i;
    }

    // Display result
    printf("%lld\n", product);

    return 0;
}