/*
Question 2: Write a program to input two numbers and display their sum, difference, product, and quotient.

Example:
Input: 10 2
Output: Sum=12, Diff=8, Product=20, Quotient=5
*/

#include <stdio.h>

int main() {
    int num1, num2;

    // Input two numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // Perform calculations
    int sum = num1 + num2;
    int diff = num1 - num2;
    int product = num1 * num2;
    float quotient = (num2 != 0) ? (float)num1 / num2 : 0;

    // Display results
    printf("Sum=%d, Diff=%d, Product=%d, Quotient=%.2f\n", sum, diff, product, quotient);

    return 0;
}