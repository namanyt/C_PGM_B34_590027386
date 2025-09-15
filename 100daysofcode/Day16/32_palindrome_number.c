/*
Question 32: Write a program to check if a number is a palindrome.

Example:
Input: 121
Output: Palindrome
*/

#include <stdio.h>

int main() {
    int num, reversed = 0, original;

    // Input number
    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;

    // Reverse the number
    while (num != 0) {
        reversed = reversed * 10 + num % 10;
        num /= 10;
    }

    // Check if palindrome
    if (original == reversed) {
        printf("Palindrome\n");
    } else {
        printf("Not palindrome\n");
    }

    return 0;
}