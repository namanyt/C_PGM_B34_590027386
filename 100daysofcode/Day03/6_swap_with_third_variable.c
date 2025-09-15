/*
Question 6: Write a program to swap two numbers using a third variable.

Example:
Input: 3 5
Output: After swap: 5 3
*/

#include <stdio.h>

int main() {
    int a, b, temp;

    // Input two numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    // Swap using a third variable
    temp = a;
    a = b;
    b = temp;

    // Display result
    printf("After swap: %d %d\n", a, b);

    return 0;
}