/*
Question 33: Write a program to check if a number is an Armstrong number.

Example:
Input: 153
Output: Armstrong
*/

#include <stdio.h>
#include <math.h>

int main() {
    int num, original, remainder, n = 0;
    double result = 0.0;

    // Input number
    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;

    // Count the number of digits
    while (original != 0) {
        original /= 10;
        ++n;
    }

    original = num;

    // Calculate the sum of nth powers of its digits
    while (original != 0) {
        remainder = original % 10;
        result += pow(remainder, n);
        original /= 10;
    }

    // Check if Armstrong number
    if ((int)result == num) {
        printf("Armstrong\n");
    } else {
        printf("Not Armstrong\n");
    }

    return 0;
}