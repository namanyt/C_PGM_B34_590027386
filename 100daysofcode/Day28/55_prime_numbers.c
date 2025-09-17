/*
Question 55: Write a program to print all the prime numbers from 1 to n.

Example:
Input: 10
Output: 2 3 5 7
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
    int n;

    // Input upper limit
    printf("Enter the upper limit: ");
    scanf("%d", &n);

    printf("Prime numbers: ");
    for (int i = 2; i <= n; i++) {
        if (isPrime(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}