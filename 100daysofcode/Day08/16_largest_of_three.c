/*
Question 16: Write a program to input three numbers and find the largest among them using if–else.

Example:
Input: 3 7 5
Output: Largest is 7
*/

#include <stdio.h>

int main() {
    int num1, num2, num3;

    // Input three numbers
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    // Find the largest number
    if (num1 >= num2 && num1 >= num3) {
        printf("Largest is %d\n", num1);
    } else if (num2 >= num1 && num2 >= num3) {
        printf("Largest is %d\n", num2);
    } else {
        printf("Largest is %d\n", num3);
    }

    return 0;
}