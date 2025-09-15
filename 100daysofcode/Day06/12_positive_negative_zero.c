/*
Question 12: Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.

Example:
Input: -5
Output: Negative
*/

#include <stdio.h>

int main() {
    int num;

    // Input an integer
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Check positive, negative, or zero
    if (num > 0) {
        printf("Positive\n");
    } else if (num < 0) {
        printf("Negative\n");
    } else {
        printf("Zero\n");
    }

    return 0;
}