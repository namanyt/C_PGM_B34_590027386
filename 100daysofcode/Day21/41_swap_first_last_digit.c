/*
Question 41: Write a program to swap the first and last digit of a number.

Example:
Input: 1234
Output: 4231
*/

#include <stdio.h>
#include <math.h>

int main() {
    int num, first, last, digits;

    // Input number
    printf("Enter a number: ");
    scanf("%d", &num);

    digits = (int)log10(num); // Count digits - 1
    first = num / (int)pow(10, digits); // Extract first digit
    last = num % 10; // Extract last digit

    // Swap first and last digits
    num = num - first * (int)pow(10, digits) - last;
    num = num + last * (int)pow(10, digits) + first;

    printf("Number after swapping first and last digit = %d\n", num);

    return 0;
}