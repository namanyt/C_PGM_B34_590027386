/*
Question 44: Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.

Example:
Input: 3
Output: Approximate sum: 3.3
*/

#include <stdio.h>

int main() {
    int n;
    double sum = 0.0;

    // Input number of terms
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        sum += (2 * i - 1) / (double)(2 * i);
    }

    printf("Approximate sum: %.2f\n", sum);

    return 0;
}