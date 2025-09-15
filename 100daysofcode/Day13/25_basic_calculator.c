/*
Question 25: Write a program to implement a basic calculator using switch-case for +, -, *, /, %.

Example:
Input: 4 2 +
Output: 6
*/

#include <stdio.h>

int main() {
    float num1, num2;
    char operator;

    // Input two numbers and an operator
    printf("Enter two numbers and an operator (+, -, *, /, %%): ");
    scanf("%f %f %c", &num1, &num2, &operator);

    // Perform calculation based on operator
    switch (operator) {
        case '+':
            printf("%.2f\n", num1 + num2);
            break;
        case '-':
            printf("%.2f\n", num1 - num2);
            break;
        case '*':
            printf("%.2f\n", num1 * num2);
            break;
        case '/':
            if (num2 != 0) {
                printf("%.2f\n", num1 / num2);
            } else {
                printf("Division by zero error\n");
            }
            break;
        case '%':
            if ((int)num2 != 0) {
                printf("%d\n", (int)num1 % (int)num2);
            } else {
                printf("Division by zero error\n");
            }
            break;
        default:
            printf("Invalid operator\n");
    }

    return 0;
}