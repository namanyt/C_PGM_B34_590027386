/*
Question 35: Write a program to calculate the factorial of a number.

Example:
Input: 5
Output: 120
*/

#include <stdio.h>

int main() {
    int num;
    unsigned long long factorial = 1;

    // Input number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Calculate factorial
    if (num < 0) {
        printf("Factorial of a negative number doesn't exist.\n");
    } else {
        for (int i = 1; i <= num; i++) {
            factorial *= i;
        }
        printf("Factorial = %llu\n", factorial);
    }

    return 0;
}