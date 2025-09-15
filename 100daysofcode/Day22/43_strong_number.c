/*
Question 43: Write a program to check if a number is a strong number.

Example:
Input: 145
Output: Strong number
*/

#include <stdio.h>

int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int num, original, digit, sum = 0;

    // Input number
    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;

    // Calculate sum of factorials of digits
    while (num > 0) {
        digit = num % 10;
        sum += factorial(digit);
        num /= 10;
    }

    // Check if strong number
    if (sum == original) {
        printf("Strong number\n");
    } else {
        printf("Not a strong number\n");
    }

    return 0;
}