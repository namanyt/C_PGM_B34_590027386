/*
Question 45: Write a program to find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms.

Example:
Input: 3
Output: Approximate sum: 1.56
*/

#include <stdio.h>

int main() {
    int n;
    double sum = 0.0;

    // Input number of terms
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        sum += (2.0 * i) / (3.0 + (i - 1) * 4);
    }

    printf("Approximate sum: %.2f\n", sum);

    return 0;
}