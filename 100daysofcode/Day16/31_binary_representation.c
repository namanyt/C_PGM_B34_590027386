/*
Question 31: Write a program to take a number as input and print its equivalent binary representation.

Example:
Input: 10
Output: 1010
*/

#include <stdio.h>

void printBinary(int num) {
    if (num > 1) {
        printBinary(num / 2);
    }
    printf("%d", num % 2);
}

int main() {
    int num;

    // Input number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Print binary representation
    printBinary(num);
    printf("\n");

    return 0;
}