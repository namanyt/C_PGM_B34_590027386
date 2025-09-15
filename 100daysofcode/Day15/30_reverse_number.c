/*
Question 30: Write a program to reverse a given number.

Example:
Input: 1234
Output: 4321
*/

#include <stdio.h>

int main() {
    int num, reversed = 0;

    // Input number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Reverse the number
    while (num != 0) {
        reversed = reversed * 10 + num % 10;
        num /= 10;
    }

    // Display result
    printf("%d\n", reversed);

    return 0;
}