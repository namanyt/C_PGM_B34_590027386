/*
Question 36: Write a program to find the greatest common divisor (GCD) of two numbers.

Example:
Input: 36 60
Output: 12
*/

#include <stdio.h>

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int num1, num2;

    // Input two numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // Calculate GCD
    printf("GCD = %d\n", gcd(num1, num2));

    return 0;
}