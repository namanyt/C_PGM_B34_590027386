/*
Question 5: Write a program to convert temperature from Celsius to Fahrenheit.

Example:
Input: 0
Output: Fahrenheit=32
*/

#include <stdio.h>

int main() {
    float celsius, fahrenheit;

    // Input temperature in Celsius
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);

    // Convert to Fahrenheit
    fahrenheit = (celsius * 9 / 5) + 32;

    // Display result
    printf("Fahrenheit=%.2f\n", fahrenheit);

    return 0;
}