/*
Question 37: Write a program to find the least common multiple (LCM) of two numbers.

Example:
Input: 12 15
Output: 60
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

int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}

int main() {
    int num1, num2;

    // Input two numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // Calculate LCM
    printf("LCM = %d\n", lcm(num1, num2));

    return 0;
}