/*
Question 42: Write a program to check if a number is a perfect number.

Example:
Input: 6
Output: Perfect number
*/

#include <stdio.h>

int main() {
    int num, sum = 0;

    // Input number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Calculate sum of divisors
    for (int i = 1; i <= num / 2; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }

    // Check if perfect number
    if (sum == num) {
        printf("Perfect number\n");
    } else {
        printf("Not a perfect number\n");
    }

    return 0;
}