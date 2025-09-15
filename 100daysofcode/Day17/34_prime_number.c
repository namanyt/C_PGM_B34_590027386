/*
Question 34: Write a program to check if a number is prime.

Example:
Input: 7
Output: Prime
*/

#include <stdio.h>
#include <stdbool.h>

bool isPrime(int num) {
    if (num <= 1) return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}

int main() {
    int num;

    // Input number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Check if prime
    if (isPrime(num)) {
        printf("Prime\n");
    } else {
        printf("Not prime\n");
    }

    return 0;
}