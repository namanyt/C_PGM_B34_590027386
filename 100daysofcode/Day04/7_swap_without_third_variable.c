/*
Question 7: Write a program to swap two numbers without using a third variable.

Example:
Input: 10 20
Output: After swap: 20 10
*/

#include <stdio.h>

int main() {
    int a, b;

    // Input two numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    // Swap without using a third variable
    a = a + b;
    b = a - b;
    a = a - b;

    // Display result
    printf("After swap: %d %d\n", a, b);

    return 0;
}