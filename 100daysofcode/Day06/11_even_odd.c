/*
Question 11: Write a program to input an integer and check whether it is even or odd using if–else.

Example:
Input: 7
Output: 7 is odd
*/

#include <stdio.h>

int main() {
    int num;

    // Input an integer
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Check even or odd
    if (num % 2 == 0) {
        printf("%d is even\n", num);
    } else {
        printf("%d is odd\n", num);
    }

    return 0;
}